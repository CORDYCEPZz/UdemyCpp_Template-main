#include <iostream>

//  &: Memory Adress (Reference)
//  *p: Value of that memory adress (De-reference)


int main()
{
    int number = 5;
    std::cout << "Value of number: " << number << std::endl;
    std::cout << "Adress of number: " << &number << std::endl;

    int *p = &number; // p ist jetzt der pointer
    std::cout << "Value of pointer: " << p << std::endl;
    std::cout << "Adress of pointer: " << &p << std::endl;
    // Wie kann man jetzt den Wert erhalten von dem Speicherplatz auf den der Pointerzeigt ?
    std::cout << "Value of the adress to which the pointer points: " << *p << std::endl;

    return 0;
}
