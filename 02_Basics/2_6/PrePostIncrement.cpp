#include <iostream>
// ++i; Pre-increment
// i++; Post-increment

void func(int val)
{
    std::cout << "Inner val: " << val << std::endl;
}

int main()
{
    int valpre = 0;
    std::cout << "Pre-Increment" << std::endl;
    std::cout << "Outer val: " << valpre << std::endl;
    func(valpre++);
    std::cout << "Outer val: " << valpre << "\n" << std::endl;

    int valpost = 0;
    std::cout << "Post-Increment" << std::endl;
    std::cout << "Outer val: " << valpost << std::endl;
    func(++valpost);
    std::cout << "Outer val: " << valpost << "\n" << std::endl;
    return 0;
}
