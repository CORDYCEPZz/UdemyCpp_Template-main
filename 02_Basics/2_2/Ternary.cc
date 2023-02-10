# include <iostream>

int main()
{
    int age1 = 53;
    int age2 = 12;

    // 1.) If and Else Branching
    int older_age1;
    if(age1>age2)
    {
        older_age1 = age1;
    }
    else
    {
        older_age1 = age2;
    }

    // 2.) Ternary-Operator
    int older_age2 = age1>age2 ? age1:age2;
    std::cout<<"In order to compare both methods here is the result: " << older_age1 << " "<< older_age2 << std::endl;

    return 0;
}
