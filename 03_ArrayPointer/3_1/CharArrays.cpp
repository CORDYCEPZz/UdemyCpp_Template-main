#include <iostream>
#include <cstdint>

int main()
{
    const char first_name[] = {'M', 'a', 'r', 'v', 'i', 'n'};
    std::cout << first_name  << std::endl;

    const char first_name_right[] = {'M', 'a', 'r', 'v', 'i', 'n', '\0'};
    std::cout << first_name_right  << std::endl;

    const char last_name[] = "Apel";
    std::cout << last_name << std::endl;

    for (int i=0; i < 5; i++)
        std::cout << "Char[i] = " << last_name[i] << std::endl;
    // Zeigt der letzte Index ist eine null !
    return 0;
}
