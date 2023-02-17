#include <iostream>
#include <cstdint>

//  Store in an array the reversed elements of array 1
int main()
{
    std::int32_t array1[] = {1, 2, 3, 4};
    std::int32_t array2[4]{};

    for(int i=0; i<4; i++)
    {
        array2[i] = array1[3-i];
    }


    for(int i=0; i<4; i++)
    {
        std::cout << "Array: " << array1[i] << " reversed Array: " << array2[i] << "\n";
    }


    return 0;
}
