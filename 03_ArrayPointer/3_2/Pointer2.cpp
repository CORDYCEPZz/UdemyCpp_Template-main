#include <iostream>

int main()
{
    // Heap allocation
    int *p_zahl = new int{4};

    // THe memory adress of the heap variable, where the pointer points to
    std::cout << p_zahl << std::endl;
    // TJe value of the heap variable, where the pointer points to
    std::cout <<  *p_zahl << std::endl;
    // Memory adress of the pointer itself
    std::cout << &p_zahl << std::endl;


    // Heap De-allocation
    delete p_zahl;


    return 0;
}
