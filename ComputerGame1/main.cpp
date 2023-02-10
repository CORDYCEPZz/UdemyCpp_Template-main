#include <iostream>
#include <cstdint>

int main()
{
    char LEFT ='a';
    char RIGHT ='d';
    char move;
    std::cout << "Welcome to Jumanji! Where do you want to move ? (Use WASD-Movement you Noob): ";
    std::cin >> move;

    if(LEFT==move)
    {
        std::cout << "The player moved to the left !"<< std::endl;
    }

    else if(RIGHT==move)
    {
        std::cout << "The player moved to the right !" << std::endl;
    }

    else
    {
        std::cout << "The player couldnt move and you killed him. Well done !"
    }



    return 0;
}
