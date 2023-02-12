#include <iostream>
#include <cstdint>

template <typename T>
T max(T a, T b)
{
    return a > b ? a : b;
}

int main()
{
    double da = 1;
    double db = 3;
    int ia = 1;
    int ib = 2;
    std::cout << "The bigger Double " << max(da, db) << std::endl;
    std::cout << "The bigger Integer " << max(ia, ib) << std::endl;
    return 0;
}
