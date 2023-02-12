#include <iostream>
//  1a. C++: static_cast<newDtype(varName)>  Easier to read, less prone to errors
//  1b. C:  (newDtype)(varName)

int main()
{
    //  Der C++ sollte immer verwendet werden da er Problemem macht
    //  1. Example
    int a = 12;
    float b = static_cast<float>(a);
    std::cout << b << "\n";

    //  2. Example
    double c = 12;
    float d = static_cast<float>(c);
    std::cout << d << "\n";

    //  3. Example
    short e = 23;
    char f = static_cast<char>(e);
    std::cout << f << "\n";



    return 0;
}
