#include <iostream>
#include <cstdint>

// The following code block initiates a function that will return a output of type 32_t
// It asks the user to input a number and will return that number
// das std::int32_t ist der return value der funktion
std::int32_t user_input() // parameterliste leer ()
{
    std::int32_t number;
    std::cout << "Please enter a number: ";
    std::cin>> number;

    return number;
}



int main()
{
    std::int32_t n1 = user_input();
    std::int32_t n2 = user_input();
    std::int32_t n3 = user_input();

    std::cout<<"Your numbers are ["<<n1<<", " <<n2<<", " <<n3 <<"]" <<std::endl;


    return 0;
}
