First we need to get some dependencies for the build.

```bash
sudo apt-get install libzstd-dev
```

Now we need to build and install llvm.

1. Download the minimal [source files](https://github.com/llvm/llvm-project/releases/download/llvmorg-19.1.0/llvm-project-19.1.0.src.tar.xz) of the llvm-project and extract them somewhere.

2. Configure the cmake build
```bash
cmake -DCMAKE_BUILD_TYPE:STRING=Release -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE -DCMAKE_C_COMPILER:FILEPATH=/usr/bin/gcc -DCMAKE_CXX_COMPILER:FILEPATH=/usr/bin/g++ --no-warn-unused-cli -S./llvm-project-19.1.0.src/llvm -B./llvm-project-19.1.0.src/llvm/build -G "Unix Makefiles"
```

3. Use the install target to build and install llvm in one step
```bash
sudo cmake --build ./llvm-project-19.1.0.src/llvm/build --config Release --target install -j 8
```

4. You can now delete the extracted source files if you want.
