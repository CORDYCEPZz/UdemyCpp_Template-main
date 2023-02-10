#include <iostream>
#include <cstdint>

int main()
{
    std::int32_t number = -4;

    bool check = ((number >= 0) && (number<=10));
    std::cout<<"Our Statement is: " << std::boolalpha<< check <<std::endl;
    std::cout<<"The netgation of this is: " << std::boolalpha<< !check <<std::endl;

    return 0;
}
