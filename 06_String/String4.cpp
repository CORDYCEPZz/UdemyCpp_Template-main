#include <iostream>
#include <string>



int main()
{
    // Iterator
    const auto text = std::string{"Eins, Zwei, Drei"};
    const auto first_char = text[0]; // wie bei vektoren über [] ein index erreichen !
    std::cout << first_char << "\n";

    for (auto it = text.begin(); it != text.end(); it++)
    {
        std::cout << *it ;
    }
    std::cout << "\n\n";

    for (const auto c: text)
    {
        std::cout << c ;
    }
    std::cout << "\n\n";

    for (auto it = text.rbegin(); it != text.rend(); it++)
    {
        std::cout << *it;
    }
    std::cout << "\n\n";

    // push_back immer nur ein einzelnen char, pop_back entfernt immernur um einen char !

    // to_string
    const auto val = 10.3F;
    const auto val_str = std::to_string(val);
    std::cout << val_str << "\n";


    return 0;
}
