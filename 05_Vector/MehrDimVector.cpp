#include <iostream>
#include <vector>
#include <cstdint>

int main()
{
    auto my_vector = std::vector<std::vector<std::int32_t>>{{1, 2}, {3, 4}, {5, 6}};

    for(const auto &row: my_vector)
    {
        for(const auto &val:row)
        {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    auto my_vector2 = std::vector<std::vector<std::int32_t>>(3, std::vector<std::int32_t>(2, 0)) ;

    for(const auto &row: my_vector2)
    {
        for(const auto &val:row)
        {
            std::cout << val << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
