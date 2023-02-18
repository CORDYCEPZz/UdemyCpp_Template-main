#include <iostream>

void f(int v)
{
    std::cout << &v << std::endl;
}

int main()
{
    int a = 2;
    f(a);
    std::cout << &a << std::endl;

    return 0;
}
