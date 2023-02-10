#include <iostream>

int main()
{

    float my_value_1;
    float my_value_2;

    std::cout << "Please enter your first number: " << std::endl;
    std::cin >> my_value_1;

    std::cout << "Please enter your second number: " << std::endl;
    std::cin >> my_value_2;


    float my_result1 = my_value_1 + my_value_2;
    std::cout << "addition: " << my_result1 << std::endl;

    float my_result2 = my_value_1 - my_value_2;
    std::cout << "substraction: " << my_result2 << std::endl;

    float my_result3 = my_value_1 * my_value_2;
    std::cout << "multiplication: " << my_result3 << std::endl;

    float my_result4 = my_value_1 / my_value_2;
    std::cout << "division: " << my_result4 << std::endl;


    return 0;
}
