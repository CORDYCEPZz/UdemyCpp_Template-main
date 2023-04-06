#include <iostream>
#include <string>

template <typename T, typename... Args>
T concat(Args... args)
{
    return (... + args); // args ist der erste Wert auf den alles addiert wird
}

int main()
{
    std::string s1 = "Ha";
    std::string s2 = "ll";
    std::string s3 = "o";

    std::cout << concat<std::string>(s1, s2, s3) << std::endl;
    std::cout << concat<int>(1, 2, 3) << std::endl;

    return 0;
}
