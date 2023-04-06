#include <iostream>
#include <string>
#include <string_view>
#include <vector>
#include <numeric>

template <typename T>
std::size_t length(const std::vector<T> &vec)
{
    return vec.size();
}

template <>
std::size_t length(const std::vector<std::string> &vec)
{
    int sum = 0;
    for(const auto &string : vec)
    {
        sum += string.size();
    }
    return sum;
}


int main()
{
    const auto vec1 = std::vector<int>{11, 2, 3};
    std::cout << length(vec1) << '\n';

    const auto vec2 = std::vector<std::string>{"11", "2", "3"};
    std::cout << length(vec2) << '\n';


    return 0;
}
