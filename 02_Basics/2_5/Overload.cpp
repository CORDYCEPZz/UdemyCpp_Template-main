#include <iostream>

double max(double a, double b)
{
    return a > b ? a:b ;
}

int max(int a, int b)
{
    return a > b ? a:b ;
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
