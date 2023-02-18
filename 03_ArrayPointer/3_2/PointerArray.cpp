#include <iostream>
#include <cstdint>

int main()
{
    auto array_size = std::size_t{10};

    // Hap Allocation
    auto *arr = new std::int32_t[array_size]; //legt den speicher für 10 int_32 fest

    for (std::size_t i=0; i < array_size; i++)
    {
        arr[i] =  (std::int32_t)i;
    }

    // Store values
    for (std::size_t i=0; i < array_size; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    // Heap de-allocation
    delete[] arr;

    return 0;
}
