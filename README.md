# cpuinfo
A simple CLI tool for displaying CPU information
- model
- cores
- Not implemented: frequency

## Features

- Cross-platform availability:
  - Linux, Windows and MacOS
  - x86, x86-64, ARM, and ARM64 architectures
- Compilable by gcc, clang and msvc
- cmake as a build system
  - Includes 3rdparty sw https://github.com/pytorch/cpuinfo.git using git submodules
- Github actions for ci pipeline

## Build `cpuid`

> Requirements: git, cmake, c++ compiler (gcc, clang, MSVC)

1. Download repository:
    ```
    git clone https://github.com/tausteen/cpuid.git
    ```
2. Build using cmake:
    ```
    mkdir build
    cd build
    cmake .. && make
    ```

## Run by Github Actions

Output from testing is shown under "Run" in Github Actions.

## Example

See [main.cpp](src/main.cpp)

The output should look similar to this one:

```
----------------------------------- CPU INFO -----------------------------------
 model:             Intel Xeon Platinum 8171M
 physical cores:    2
 logical cores:     2
```
## Known bugs
- Model is not identified on MacOS ARM64