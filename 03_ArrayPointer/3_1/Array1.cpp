#include <iostream>
#include <cstdint>




int main()
{
    //  Initialisieren und Deklarieren
    std::int32_t array1[5] = {1,2,3,4,5};
    std::int32_t array2[]  = {11,12,13,14,15};
    // Elemente abfragen
    for(int i = 0; i<=4; i++)
    {
        //  before
        std::cout << array1[i] << " " << array2[i] << "\n";
        // change them
        array1[i] += 20;
        // afet
        std::cout << array1[i] << " " << array2[i] << "\n\n";
    }




    return 0;
}
