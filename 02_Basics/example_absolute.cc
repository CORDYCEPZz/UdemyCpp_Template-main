#include <iostream>
#include <cstdint>

// 1.) User-Input: integer number
// 2.) Compute the absolute value of an integer value
// 3.) Print out the absolute value

int main()
{
    std::int16_t value;
    std::cout<<"Please enter a number: ";
    std::cin>> value;
    std::int16_t initial_value = value;


    if(value<0)
    {
        value = value*-1;
    }

    std::cout<<"The absolute value of your Input "<< initial_value << " is: " << value << std::endl;


    return 0;
}
