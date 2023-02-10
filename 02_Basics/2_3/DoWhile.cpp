# include <iostream>
//  Do while is used when the loop has to be extermined at least once !
int main()
{
    int sum = 10;
    int temp_val;
    std::cout<<"Try to reach a number higher than 10 by entering a number!"<<std::endl;

    do
    {
        std::cout<<"\nCurrent Sum: " << sum << " Enter the next value: ";
        std::cin>> temp_val;
        sum += temp_val;
    } while (sum < 10);
    return 0;
}
