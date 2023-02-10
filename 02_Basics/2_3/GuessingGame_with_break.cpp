#include <iostream>
#include <cstdint>


int main ()
{
    bool correct_gues = false;
    int number;
    std::cout<<"Welcome to the guessing game ! The goal is to gues a positive Integer between 0 and 10! Good luck ;) \n"<<std::endl;

    while(!correct_gues)
    {
    std::cout << "Please enter your guess: ";
    std::cin >> number;
        if(number >= 0 && number <=10)
        {
            if(number == 6)
            {
                std::cout<<"You did it !, Wohoo"<<std::endl;
                correct_gues = true;
            }

            else if(number%2 == 0)
            {
                std::cout<< "You missed this try but the number is also even! \n"<< std::endl;
            }

            else
            {
                std::cout<< "Nope thats not it. \n"<< std::endl;
            }
        }
        else
        {
            std::cout<< "You entered an invalid Number! Please enter a number in the intervall [0,10]. \n"<< std::endl;
        }
    }

    return 0;
}
