#include <iostream>
#include <cstdint>

int main()
{
    const char last_name[] = "Apel";
    std::cout << last_name << std::endl;

    const std::int32_t values[]{1, 2, 3};
    for(std::size_t i=0; i <4; i++)
    {
        std::cout << values[i] << std::endl;
    }

    std::cout << values << std::endl;

    return 0;
}
