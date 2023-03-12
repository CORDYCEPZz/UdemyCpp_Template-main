#include <iostream>
#include <vector>
#include <list>

constexpr static auto ARRAY_LEN = 3U; // damit es bei compiletime schon im programm feststeht
int main()
{
    const auto vec = std::vector<int>{1,2,3};
    const auto lst = std::list<int>{1,2,3};

    std::cout << vec.size() << "\n";
    std::cout << lst .size() << "\n";

    std::cout << vec.empty() << "\n";
    std::cout << lst.empty() << "\n";

    std::cout<<"\nVector\n";
    for(auto it = vec.begin(); it!=vec.end(); ++it)
    {
        std::cout << *it << "\n";
    }
    std::cout<<"\nList\n";
    for(auto it = lst.begin(); it!=lst.end(); ++it)
    {
        std::cout << *it << "\n";
    }
    std::cout<<"\nAlternativ ranged for loops\n";
    std::cout<<"\nVector\n";
    for(const auto &val: vec)
    {
        std::cout << val << "\n";
    }
    std::cout<<"\nList\n";
    for(const auto &val: lst)
    {
        std::cout << val << "\n";
    }

    //  was das neu ist !
    std::cout << "\n";
    auto it_lst = lst.begin();
    for(std::size_t i=0; i<3;i++)
    {
        std::cout << *it_lst << '\n';
        ++it_lst;
    }

    return 0;
}
