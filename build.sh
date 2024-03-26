#!/bin/bash
export WDIR="$(pwd)"
export PATH=$HOME/toolchain/proton-clang-12/bin:$PATH
export PATH=$WDIR/toolchain/bin:$PATH
export LLVM=1
export ARCH=arm64
export PLATFORM_VERSION=12
export ANDROID_MAJOR_VERSION=s

if [ -z "$DEVICE" ]; then
    export DEVICE="S10-5G"
fi


if [ ! -f "$HOME/python" ]; then
    ln -s /usr/bin/python2.7 "$HOME/python"
fi

export CONFIG="${DEVICE}_defconfig"
export AIK="${WDIR}/binaries/${DEVICE}/AIK"
export VBMETA="${WDIR}/binaries/addons/vbmeta.img"
export current_datetime=$(date +"%Y-%m-%d_%H-%M-%S")
export KBUILD_BUILD_USER="@ravindu644"
export MKDTIMG="${WDIR}/binaries/mkdtimg"

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

mkdir out || true 

#patching allowlist for non-gki
patch_ksu(){
    if [ ! -f "${WDIR}/.allowlist_patched" ]; then
        patch -p1 < "${WDIR}/ksu.patch"
        echo "1" > "${WDIR}/.allowlist_patched"
    fi
}

dtb() {
    $MKDTIMG cfg_create "${WDIR}/out/dt.img" "${WDIR}/binaries/exynos9820.cfg" -d "${WDIR}/arch/arm64/boot/dts/exynos"
}

packing() {
    echo -e "\n\n[+] Repacking boot.img..."
    cd "${AIK}/ramdisk"
    if [ ! -d "debug_ramdisk" ]; then
        mkdir -p debug_ramdisk dev metadata mnt proc second_stage_resources sys
    fi
    cd "${WDIR}"
    sudo bash "${AIK}/repackimg.sh"
    echo -e "\n\n[+] Repacking Done..!"
    mv "${AIK}/image-new.img" "${WDIR}/out/boot.img"

    echo -e "\n\n[i] Creating a Flashable tar..!"

    cd "${WDIR}/out"
    cp "${VBMETA}" .
    sudo chmod +777 *
    tar -cvf "${FILE_NAME}.tar" boot.img dt.img vbmeta.img ; rm boot.img dt.img vbmeta.img
    zip -9 "${FILE_NAME}.tar.zip" "${FILE_NAME}.tar"
    mkdir "${DEVICE}" && mv "${FILE_NAME}.tar.zip" "${DEVICE}"
    cd "${WDIR}"
    echo -e "\n\n[i] Compilation Done for ${DEVICE}..🌛"    
}


lpos(){
    export FILE_NAME="LPoS-${DEVICE}-${LPOS_KERNEL_VERSION}"    
    make ${ARGS} distclean
    patch_ksu
    make ${ARGS} ${CONFIG} lpos.config
    make ${ARGS} menuconfig
    make ${ARGS} -j$(nproc) || exit 1
    dtb
    mv "${WDIR}/arch/arm64/boot/Image" "${AIK}/split_img/boot.img-kernel"
    packing
}

ksu(){
    export FILE_NAME="LPoS-${DEVICE}-KSU-${LPOS_KERNEL_VERSION}"
    make ${ARGS} ${CONFIG} lpos_ksu.config
    make ${ARGS} menuconfig
    make ${ARGS} -j$(nproc) || exit 1
    dtb
    mv "${WDIR}/arch/arm64/boot/Image" "${AIK}/split_img/boot.img-kernel"
    packing  
}

case "$1" in
    "-k")
        ksu ;;
    *)
        lpos ;;
esac