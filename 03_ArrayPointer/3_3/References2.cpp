#include <iostream>

void copy(int v) // v kopiert den wert
{   // modifiable Input
    v *= 2; // der globale wert von dem input  unten a wird nicht verändert !
    std::cout << "f1: " <<v << std::endl;
    std::cout << &v << std::endl;
}

void copy_const(const int v) // v kopiert auch den wert aber der ist constant
{   // const parameter -> Input only
    std::cout << "f1: " <<v << std::endl;
    std::cout << &v << std::endl;
}

void reference_input(const int &v)
{ // Inputonly (because of th const)
    std::cout << "f3: " << v << std::endl;
    std::cout << &v << std::endl;
}

void reference_in_output(int &v)
{ // Input and Output
    v *= 2;
    std::cout << "f3: " << v << std::endl;
    std::cout << &v << std::endl;
}



int main()
{
    int a = 2;
    std::cout << "The original storage of " << a << " is at: " << &a << std::endl;

    copy(a); // zeigt auf copy
    copy_const(a);
    reference_input(a);
    reference_in_output(a);

    std::cout << "The final storage of " << a << " is at: " << &a << std::endl;

    return 0;
}
