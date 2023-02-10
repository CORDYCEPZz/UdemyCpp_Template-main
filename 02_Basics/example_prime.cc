#include <iostream>
#include <cstdint>

// 1.) User-Input: unsigned integer number
// 2.) Compute if the number is a prime number
// 3.) Print out the result

// Prime Number: Only divisble by itself and 1 with a remainder of 0

int main()
{
    bool is_prime = true;
    std::uint16_t user_input;
    std::uint16_t deviseble_by;
    std::cout << "Please enter a number. I will test if it is a prime: ";
    std::cin >> user_input ;
    std::cout<< "your input is: "<< user_input << std::endl;

    for(std::uint16_t i=2; i < user_input and is_prime==true; i++)
    {
        if(user_input%i == 0)
        {
            is_prime = false;
            deviseble_by = i;
        }
    }

    if(is_prime)
    {
        std::cout<<"You find a prime! Your Number "<<user_input<<" is not devsable by any integer number!"<<std::endl;
    }

    else
    {
        std::cout<<"Your number "<<user_input<<" is not a prime! It is devisable by "<<deviseble_by<<std::endl;
    }

    return 0;
}
