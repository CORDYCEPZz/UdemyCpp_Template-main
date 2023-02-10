#include <iostream>
#include <cstdint>
#include<math.h>

int main()
{
    int sum=0;
    int temp_val;
    int goal=10;
    std::cout<<"Please enter an Integers numbers until you reach the 10"<<std::endl;
    while (sum < goal)
    {
        std::cout<<"Current sum: "<<sum << " Enter the next value: ";
        std::cin>> temp_val;
        sum += temp_val;
    }
    std::cout<<"Good job your total sum is equal to: " << sum << std::endl;

    return 0;
}
