#!/bin/bash
ln -s /usr/bin/python2.7 "$HOME/python"
export CONFIG="exynos9820-beyondxks_defconfig"
export PATH=$HOME/toolchain/proton-clang-12/bin:$PATH
export LLVM=1
export ARCH=arm64
export PLATFORM_VERSION=12
export ANDROID_MAJOR_VERSION=s

ARGS="
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

#make ${ARGS} clean && make ${ARGS} mrproper

#patching allowlist for non-gki
if [ ! -f ".allowlist_patched" ]; then
    patch -p1 < "$work_dir/ksu.patch"
    echo "1" > ".allowlist_patched"
fi

patch -p1 < "$work_dir/ksu.patch" || true
make ${ARGS} ${CONFIG}
make ${ARGS} menuconfig
make ${ARGS} -j$(nproc)