#include <iostream>
#include <algorithm>

using namespace std;

int min( int a, int b)
{
    std::cout << "See im used ! ) (bcs using namespace)" << std::endl;
    return -a > -b ? a:b ;
}



int main ()
{
    int a = 2;
    int b = 3;

    int result = min(a, b);
    std::cout << result << std::endl;


    return 0;
}
