#include <iostream>
#include <tuple>
#include <utility> // pair liegt im utility drin
#include <string>
#include <vector>

int main()
{
    auto my_pair = std::pair<int, float>{1337, -21.0F};
    std::cout << my_pair.first << "\n";
    std::cout << my_pair.second << "\n";

    auto my_tuple = std::tuple<int,float,std::string>{1337, -21.0F, "Jan"};
    std::cout << std::get<0>(my_tuple) << "\n";
    std::cout << std::get<1>(my_tuple) << "\n";
    std::cout << std::get<2>(my_tuple) << "\n";

    const auto data =
      std::vector<std::pair<int, float>>{{1337, -21.0F}, {10, 12.5F}};

    for(const auto &val:data)
    {
        std::cout << val.first << " " << val.second << "\n";
    }
}
