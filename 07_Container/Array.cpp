#include <iostream>
#include <array>
#include <vector>

constexpr static auto ARRAY_LEN = 3U; // damit es bei compiletime schon im programm feststeht
int main()
{
    const auto vec = std::vector<int>{1,2,3};
    const auto arr = std::array<int, ARRAY_LEN>{1,2,3};

    std::cout << vec.size() << "\n";
    std::cout << arr.size() << "\n";

    std::cout << vec.empty() << "\n";
    std::cout << arr.empty() << "\n";

    std::cout<<"\nVector\n";
    for(auto it = vec.begin(); it!=vec.end(); ++it)
    {
        std::cout << *it << "\n";
    }
    std::cout<<"\nArray\n";
    for(auto it = arr.begin(); it!=arr.end(); ++it)
    {
        std::cout << *it << "\n";
    }
    std::cout<<"\nAlternativ ranged for loops\n";
    std::cout<<"\nVector\n";
    for(const auto &val: vec)
    {
        std::cout << val << "\n";
    }
    std::cout<<"\nArray\n";
    for(const auto &val: arr)
    {
        std::cout << val << "\n";
    }

    return 0;
}
