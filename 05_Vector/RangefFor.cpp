#include <iostream>
#include <vector>


// 1. auto al : vec => int val : vec
// 2. auto &al : vec => int &val : vec
// 3. const auto val : vec => const int val : vec
// 4. const &auto val : vec => const &int val : vec



int main()
{
    //  1. auto val: vec => int val : vec
    auto vec = std::vector<int>{1, 2, 3, 4, 5};

    //  hier in der loop legt man eine copy an das kann vergleichsweise viel speicher kosten ! weil man nichr referenz eingibt
    for (auto val: vec)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;


    //  2. Referenz !
    for (auto &val: vec)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    //  3. Wenn man wert nur lesen will und nichts verändern
    for (const auto val: vec)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;

    // 4. Const auto ref !
    for (const auto val: vec)
    {
        std::cout << val << " ";
    }
    std::cout << std::endl;


    return 0;
}
