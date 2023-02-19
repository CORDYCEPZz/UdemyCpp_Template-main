#include <iostream>
#include <cstdint>


void add(int &x)
{
    x++;
}


int main()
{
    int x = 0;
    std::cout << "Before: " << x << "\n";
    add(x);
    std::cout << "After: " << x << "\n";

    return 0;
}
