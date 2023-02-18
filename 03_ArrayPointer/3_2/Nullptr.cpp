#include <iostream>
#include <cstdint>

int main()
{
    auto *p = new std::int32_t{4};
    delete p;
    p = nullptr;


    if(p!=nullptr)
    {
        std::cout << p << std::endl;
        std::cout << *p << std::endl;
    }
    else
    {
        std::cout << "The pointer does not own the Memory ! \n";
    }


    return 0;
}
