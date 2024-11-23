Download the [source files](https://objects.githubusercontent.com/github-production-release-asset-2e65be/75821432/0bc029f3-953b-4882-8191-f8c06fab48ba?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=releaseassetproduction%2F20241123%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20241123T064655Z&X-Amz-Expires=300&X-Amz-Signature=564d6c38139a372eb0483e656a2df258c015993fecf0a983d97aa07f8e44a9d4&X-Amz-SignedHeaders=host&response-content-disposition=attachment%3B%20filename%3Dllvm-project-19.1.0.src.tar.xz&response-content-type=application%2Foctet-stream) of the llvm-project.

sudo apt-get install libzstd-dev

make -DCMAKE_BUILD_TYPE:STRING=Release -DCMAKE_EXPORT_COMPILE_COMMANDS:BOOL=TRUE -DCMAKE_C_COMPILER:FILEPATH=/usr/bin/gcc -DCMAKE_CXX_COMPILER:FILEPATH=/usr/bin/g++ --no-warn-unused-cli -S/your/path/llvm-project-19.1.0.src/llvm -B/home/student/Downloads/llvm-project-19.1.0.src/llvm/build -G "Unix Makefiles"

cmake --build /your/path/llvm-project-19.1.0.src/llvm/build --config Release --target install -j 8