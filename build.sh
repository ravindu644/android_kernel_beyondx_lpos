#!/bin/bash

export WDIR="$(pwd)"
export PATH=toolchain/bin:~/proton-13/bin:$PATH
export VBMETA="${WDIR}/binaries/addons/vbmeta.img"
export KBUILD_BUILD_USER="@ravindu644"
export LLVM=1
export ARCH=arm64
export PLATFORM_VERSION=12
export ANDROID_MAJOR_VERSION=s
export REPACKER="${WDIR}/binaries/AIK/repackimg.sh"
export INSTALLER="${WDIR}/binaries/Installer"
export ARGS="
CC=clang
LD=ld.lld
ARCH=arm64
CROSS_COMPILE=aarch64-linux-gnu-
CROSS_COMPILE_ARM32=arm-linux-gnueabi-
CLANG_TRIPLE=aarch64-linux-gnu-
AR=llvm-ar
NM=llvm-nm
AS=llvm-as
READELF=llvm-readelf
OBJCOPY=llvm-objcopy
OBJDUMP=llvm-objdump
OBJSIZE=llvm-size
STRIP=llvm-strip
LLVM_AR=llvm-ar
LLVM_DIS=llvm-dis
LLVM_NM=llvm-nm
LLVM=1
"

#device specific variables
export DEVICE="S10_5G(KR)"
export SOC="exynos9820"
export DEFCONFIG=exynos9820-beyondxks_defconfig

#symlinking python2
if [ ! -f "$HOME/python" ]; then
    ln -s /usr/bin/python2.7 "$HOME/python"
fi 

#output dir
if [ ! -d "${WDIR}/out" ]; then
    mkdir -p "${WDIR}/out"
fi

#dev
if [ -z "$LPOS_KERNEL_VERSION" ]; then
    export LPOS_KERNEL_VERSION="dev"
fi

#ksu allowlist patch
allowlist(){
    if [ ! -f ".allowlist_patched" ]; then
        patch -p1 < "${WDIR}/ksu.patch"
        echo "1" > "${WDIR}/.allowlist_patched"
    fi
}

#dt
dtb() {
    ${WDIR}/binaries/mkdtimg cfg_create "${INSTALLER}/dt.img" "${WDIR}/binaries/${SOC}.cfg" -d "${WDIR}/arch/arm64/boot/dts/exynos"
}

#building non-ksu kernel
lpos(){
    enforcing(){
        export SELINUX_STATUS="enforcing"
        export FILENAME="LPoS-${DEVICE}-${LPOS_KERNEL_VERSION}-twrp-${SELINUX_STATUS}"
        make ${ARGS} clean && make ${ARGS} mrproper
        allowlist
        make ${ARGS} "${DEFCONFIG}"
        make ${ARGS} menuconfig
        make ${ARGS} -j$(nproc) || exit 1
        dtb ; repack
    }

    permissive(){
        export SELINUX_STATUS="permissive"
        export FILENAME="LPoS-${DEVICE}-${LPOS_KERNEL_VERSION}-twrp-${SELINUX_STATUS}"     
        make ${ARGS} "${DEFCONFIG}" permissive.config
        make ${ARGS} menuconfig
        make ${ARGS} -j$(nproc) || exit 1
        dtb ; repack   
    }
    enforcing
    permissive
}

#building non-ksu kernel
ksu(){
    ksu_enforcing(){
        export SELINUX_STATUS="enforcing"
        export FILENAME="KSU-LPoS-${DEVICE}-${LPOS_KERNEL_VERSION}-twrp-${SELINUX_STATUS}"        
        make ${ARGS} "${DEFCONFIG}" ksu.config
        make ${ARGS} menuconfig
        make ${ARGS} -j$(nproc) || exit 1
        dtb ; repack
    }

    ksu_permissive(){
        export SELINUX_STATUS="permissive"
        export FILENAME="KSU-LPoS-${DEVICE}-${LPOS_KERNEL_VERSION}-twrp-${SELINUX_STATUS}"           
        make ${ARGS} "${DEFCONFIG}" permissive.config ksu.config
        make ${ARGS} menuconfig
        make ${ARGS} -j$(nproc) || exit 1
        dtb ; repack        
    }
    ksu_enforcing
    ksu_permissive
}

deep_clean(){
    cd "${WDIR}"
    echo -e "[i] Cleaning Up...\n\n"
    make ${ARGS} clean && make ${ARGS} mrproper

    if [ -f ".allowlist_patched" ]; then
        rm .allowlist_patched
    fi

    if [ -f ".kernelsu-fetch-lock" ]; then
        rm .kernelsu-fetch-lock
    fi    
    
    if [ -d "drivers/kernelsu" ]; then
        rm -r drivers/kernelsu
    fi
}

#packing
repack() {
    echo -e "\n\n[+] Repacking boot.img..."
    mv "${WDIR}/arch/arm64/boot/Image" "${WDIR}/binaries/AIK/split_img/boot.img-kernel"
    cd "${WDIR}/binaries/AIK/ramdisk"
    if [ ! -d "debug_ramdisk" ]; then
        mkdir -p debug_ramdisk dev metadata mnt proc second_stage_resources sys
    fi
    cd "${WDIR}"
    sudo bash "${REPACKER}"
    echo -e "\n\n[+] Repacking Done..!"
    mv -f "${WDIR}/binaries/AIK/image-new.img" "${INSTALLER}/boot.img"
    echo -e "\n\n[i] Creating a Flashable zip..!"

    cd "${WDIR}/out"
    cp "${VBMETA}" "${INSTALLER}"
    cd "${INSTALLER}" ; sudo chmod +755 -R -f * ; rm -rf *.zip
    zip -r -9 "${FILENAME}.zip" * ; rm -rf *.img
    mv "${FILENAME}.zip" "${WDIR}/out" ; cd "${WDIR}"
    echo -e "\n\n[i] Compilation Done..🌛"
}

USER_INPUT=$1

case "$USER_INPUT" in
    "-c")
        echo -e "\n\n[i] Performing a clean build...\n\n"
        lpos ;;
    "-k")
        echo -e "\n\n[i] Building KernelSU...\n\n"
        ksu;;
    "-x") 
        echo -e "\n\n[i] Cleaning the source...\n\n"
        deep_clean ;;
    *)
        echo -e "\n[x] Wrong Input..! \n\n [i] Usage : \n\n To build LPoS : build_kernel.sh -c\n To Clean the source : build_kernel.sh -x\n To Build KernelSU : build_kernel.sh -k"
        ;;
esac
