#include <iostream>
#include <cstdint>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <string>
#include <string_view>
#include <utility>
#include <algorithm>
#include <random>


template <typename T>
void print( T input, std::string additional = "empty")
{
    std::cout << input << additional << '\n';
}

int main()
{
    print(12, "yup");
    print(12);
    return 0;
}
