#!/bin/bash
read -p "Enter Kernel Version : " value
export LPOS_KERNEL_VERSION=${value}
bash build_kernel.sh -c