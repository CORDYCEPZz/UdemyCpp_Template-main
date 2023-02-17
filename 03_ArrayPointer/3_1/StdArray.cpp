#include <iostream>
#include <cstdint>
#include <array>

template <std::size_t N>
void print_array(const std::array<std::int32_t, N> arr)
{
    for(std::size_t i=0; i< ar..size() ; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}



int main()
{
    constexpr std::size_t arr_len = 4U;
    const std::array<std::int32_t, arr_len> arr = {1, 2, 3, 4};

    print_array(arr);


    return 0;
}
