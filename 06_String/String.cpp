#include <iostream>
#include <string>


int main()
{
    std::string s = "Hello World!";
    std::cout << s << "\n";
    std::cout << s.find("Hello") << "\n";
    std::cout << "lenght of the string: " <<s.length() << "\n";
    std::cout << "string is empty: " << std::boolalpha << s.empty() << "\n";
    const auto index = s.find("Hallo");

    if(index != std::string::npos)
    {
        std::cout<< "index: " << index << "\n";
    }
    else
    {
        std::cout << "did not find substring !\n";
    }

    return 0;
}
