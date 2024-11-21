# Installing LLVM on Windows

Because all the pre-built releases provided by the llvm-project are so minimal that they are basically useless, llvm needs to build build from source and then installed. There is a [repo](https://github.com/vovkos/llvm-package-windows?tab=readme-ov-file) that provides pre-built binaries that at least contain all necessary cli tools but doing a build with them is still not possible.

## Prerequisites

Because we need clang for this just follow this [wikihow guid](https://www.wikihow.com/Install-Clang-on-Windows) on installing msvc and clang.

## Cloning LLVM

The llvm-project ist enormous, to safe checkout time and because it's all we need we do a shallow clone.

```bash
git clone --config core.autocrlf=false --depth 1 https://github.com/llvm/llvm-project.git
```

## Building With CMake

This part and the installation are basically straight from the llvm [documentation](https://llvm.org/docs/CMake.html), but for completeness and because this is exactly what we need it's still written here.

```bash
cd path\to\llvm-project
mkdir build && cd build

cmake cmake -DCMAKE_BUILD_TYPE=Release path\to\llvm-project\llvm
cmake --build . --config Release

mkdir C:\Program Files\LLVM
cmake -DCMAKE_INSTALL_PREFIX="C:\Program Files\LLVM" -P cmake_install.cmake

cmake cmake -DCMAKE_BUILD_TYPE=Debug path\to\llvm-project\llvm
cmake --build . --config Debug

mkdir C:\Program Files\LLVMDebug
cmake -DCMAKE_INSTALL_CONFIG_NAME=Debug -DCMAKE_INSTALL_PREFIX="C:\Program Files\LLVMDebug" -P cmake_install.cmake
```

Now add the bin folder to the PATH.

```bash
setx PATH="%PATH%;C:\Program Files\LLVM\bin"
```
