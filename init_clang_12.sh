#clone proton clang v12 toolchain
mkdir -p toolchain
aria2c https://cloud.ravindu-deshan.workers.dev/0:/20210123.zip
unzip 20210123.zip
mv proton-clang-20210123 proton-clang
mv proton-clang toolchain