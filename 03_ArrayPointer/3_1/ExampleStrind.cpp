#include <iostream>
#include <cstdint>

//  Output the length of the char array (String)
//  The '\0' ist not included in the length value

int main()
{
    char array1[] = "Hello World!";
    std::uint32_t length = 0;
    std::uint32_t i = 0;

    while (array1[i] != '\0')
    {
        length += 1;
        i++;
    }
    std::cout << "The length of array1 is: " << length << "\n";




    return 0;
}
