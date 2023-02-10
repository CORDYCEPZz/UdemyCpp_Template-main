#include <iostream>
#include <cstdint>

int main ()
{
    bool correct_gues = false;
    int max_number_of_tries = 3;
    int number;
    std::cout<<"Welcome to the guessing game ! The goal is to gues a positive Integer between 0 and 10! Good luck ;) \n"<<std::endl;

    for(int current_attempt = 0;current_attempt < max_number_of_tries and !correct_gues; current_attempt++)
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
                std::cout<< "You missed this try but the number is also even! Tries left: "<<max_number_of_tries-current_attempt-1<<"\n"<< std::endl;
            }

            else
            {
                std::cout<< "Nope thats not it.  Tries left: "<<max_number_of_tries-current_attempt-1<< "\n"<< std::endl;
            }
        }

        else
        {
            std::cout<< "You entered an invalid Number! Please enter a number in the intervall [0,10]. Tries left: "<<max_number_of_tries-current_attempt-1<< "\n"<< std::endl;
        }


    }

    if(!correct_gues)
    {
        std::cout<< "Gamer Over!  You failed ;("<< std::endl;
    }
    return 0;
}
