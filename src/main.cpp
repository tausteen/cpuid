#include <iomanip>
#include <iostream>

#include <cpuinfo.h>

int main(int argc, char **argv)
{
    cpuinfo_initialize();
    std::cout << "----------------------------------- CPU INFO -----------------------------------" << std::endl;
    std::cout << std::left << std::setw(20) << " model:";
    std::cout << cpuinfo_get_package(0)->name << std::endl;
    std::cout << std::left << std::setw(20) << " physical cores:";
    std::cout << cpuinfo_get_package(0)->core_count << std::endl;
    std::cout << std::left << std::setw(20) << " logical cores:";
    std::cout << cpuinfo_get_package(0)->processor_count << std::endl;
}
