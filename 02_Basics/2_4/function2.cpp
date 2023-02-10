#include <iostream>
#include <cstdint>
//  Lese eine zahl ein und schau ob sie gerade ist!

//  Liest die Zahl ein
std::int32_t user_input() // parameterliste leer ()
{
    std::int32_t number;
    std::cout << "Please enter a number: ";
    std::cin>> number;

    return number;
}


//  testet ob sie gerade ist
bool is_even(std::int32_t number)
{
    return number%2==0;
}

void print_boolean(bool statement)
{
    std::cout<< std::boolalpha<< statement << std::endl;
}



int main()
{
    std::int32_t test = user_input();
    bool value = is_even(test);
    std::cout<<"The test reaveled the statement " << test << " is even is ";
    print_boolean(value);
    return 0;
}
