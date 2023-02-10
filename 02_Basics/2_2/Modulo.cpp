#include <iostream>

int main ()
{
    std::int16_t number;
    std::cout << "Please gues an integer number in the range from 0 to 10: ";
    std::cin >> number;

    if(number >= 0 && number <=10)
    {
        if(number == 6)
        {
            std::cout<<"You did it !, Wohoo"<<std::endl;
        }
        else if(number%2 == 0)
        {
            std::cout<<"You failed but the number is also even!"<<std::endl;
        }
        else
        {
            std::cout<<"You missed ;( Better luck next time !" << std::endl;
        }
    }

    else
    {
        std::cout<<"You entered an invalid Number!" << std::endl;
    }


    return 0;
}
