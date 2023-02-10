#include <iostream>

int main()
{
    char letter_a = 'A'; // auch hier kann man drüber hovern und sehen welcher Dezimalnummer dieser Char enthält
                         // es ist wichtig das ein char mit einzelnen '' versehen ist und das nur ein character drinnen steht
    std::cout<<"The letter "<< letter_a << " is linked to the decimal value "<< (int)letter_a <<std::endl;

    char diff = '1';
    letter_a += diff ;
    std::cout<<"By adding "<< diff << " my letter turns into " <<  letter_a << " at the position " << (int) letter_a << std::endl;


    return 0;
}
