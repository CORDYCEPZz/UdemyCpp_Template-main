#include <iostream>
#include <cstdint>

void print_array(const std::int32_t arr[], const std::size_t len)
{
    for(std::size_t i=0; i< len; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}



int main()
{
    const std::int32_t values[]{1, 2, 3, 4};

    print_array(values, 4);


    return 0;
}
