#include <iomanip>
#include <iostream>

#include <cpuinfo.h>

int main(int argc, char **argv)
{
    cpuinfo_initialize();
    printf("Running on %s CPU\n", cpuinfo_get_package(0)->name);
}