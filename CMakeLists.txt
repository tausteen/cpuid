cmake_minimum_required(VERSION 3.17)

project(CPUID
    VERSION 1.0
    DESCRIPTION "A simple CLI tool for displaying CPU information"
    LANGUAGES CXX)

# required for unit testing using CMake's ctest command
# include(CTest)
# enable_testing()

include(AddGitSubmodule.cmake)

add_git_submodule(external/cpuinfo)
include_directories(external/cpuinfo/include)

add_executable(cpuid src/main.cpp)
target_link_libraries(cpuid PUBLIC cpuinfo::cpuinfo)
