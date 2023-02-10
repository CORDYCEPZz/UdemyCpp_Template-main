# include <iostream>
int main()
{
    float number1 = 10.0;
    float number2 = 3.0;
    float result = 0.0;
    result = number1*number2;
    std::cout << "number1 * number2 = " << result << std::endl;
    result = number1+number2;
    std::cout << "number1 + number2 = " << result << std::endl;
    result = number1-number2;
    std::cout << "number1 - number2 = " << result << std::endl;
    result = number1/number2;
    std::cout << "number1 / number2 = " << result << std::endl;

    return 0;
}
