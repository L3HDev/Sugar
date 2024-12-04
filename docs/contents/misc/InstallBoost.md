# Using Boost 1.82 with GCC on Windows

If you're using GCC instead of Visual Studio on Windows 11 and want to exclude MPI and Python components, here is the streamlined guide to installing Boost.

## Prerequisites

Ensure you have:

- GCC installed (part of MinGW or MSYS2).
- CMake installed and added to your system PATH.

## Step 1: Bootstrap Boost

1. Open a terminal (Command Prompt, MSYS2, or Git Bash).
2. Navigate to the Boost directory:

```bash
cd "C:/Program Files/Boost/boost_1_82_0"
```

Run the bootstrap script for GCC:

```bash
bootstrap.bat gcc
```

This will generate the b2.exe tool configured for GCC.

## Step 2: Build and Install Boost Libraries

Run the following command to build Boost, excluding MPI and Python:

```bash
b2 install -j 8 --prefix="C:/Program Files/Boost/boost_1_82_0" toolset=gcc --without-mpi --without-python cxxstd=17 address-model=64 link=shared threading=multi runtime-link=shared
```

### Explanation of Options

`-j 8`: Use 8 threads for faster compilation (adjust based on your CPU).
`--prefix`: Specifies the installation directory.
`toolset=gcc`: Use GCC as the compiler.
`--without-mpi --without-python`: Exclude MPI and Python libraries.
`cxxstd=17`: Use the C++17 standard (change if needed).
`address-model=64`: Build for 64-bit (use 32 for 32-bit builds).
`link=shared`: Build shared (dynamic) libraries.
`threading=multi`: Enable multi-threaded libraries.
`runtime-link=shared`: Link against the shared version of the C++ runtime library.

## Step 3: Verify the Installation

Check that the libraries were installed correctly in:

```plaintext
C:\Program Files\Boost\boost_1_82_0\lib
```

You should see .dll, .lib, and .a files for the Boost libraries.

## Step 4: Update System PATH (Optional)

If you plan to use shared Boost libraries (.dll files), add the Boost lib directory to your system PATH:

```bash
set PATH=%PATH%;C:\Program Files\Boost\boost_1_82_0\lib
```

This completes the installation of Boost 1.82 with GCC on Windows 11. You can now link these libraries in your C++ projects.
