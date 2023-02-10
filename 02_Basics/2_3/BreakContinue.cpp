# include <iostream>


int main() //test
{
    int sum = 0;
    int temp_val;
    std::cout<<"Try to reach a number higher than 10 by entering a number!"<<std::endl;
    std::cout<<"Ich bin ein debug für git"<<std::endl;
    do
    {
        std::cout<<"\nCurrent Sum: " << sum << " Enter the next value: ";
        std::cin>> temp_val;
        if (temp_val<0)
        {
            // std::cout<<"Invalid Input the programm will stop!"<<std::endl;
            // break;
            std::cout<<"Please dont enter negative numbers!"<<std::endl;
            continue;
        }
        sum += temp_val; // wenn das hier unten steht wird vor dem adden das vorzeichen geprüft
    } while (sum < 10);

    return 0;
}
