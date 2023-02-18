#include <iostream>

int main()
{
    // Heap allocation
    int *p = new int{4};
    //  die Kurzform von dem hier -> erst speicher mit new int machen und dann den wert 4 über {} speichern
    /* int *p = new int
    *p ? 4; */
    std::cout << "Memory adress of p: " << &p << std::endl; // Speicherort; c08
    std::cout << "Memory adress of pointed value: " << p << std::endl; // Speicherort: 490
    std::cout << "value of the Memory adress p points to: " << *p << std::endl; // Wert = 4


    // Heap De-allocation
    delete p; // löscht die Reservierung des speicherplatzes auf dem Heap

    return 0;
}
