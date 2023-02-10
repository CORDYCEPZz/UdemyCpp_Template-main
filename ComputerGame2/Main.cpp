#include <iostream>
#include <cstdint>

int main()
{
    // Set limits for the game and Initilize movement !
    std::uint32_t START = 0U;
    std::uint32_t GOAL = 9U;
    char LEFT ='a';
    char RIGHT ='d';
    char move;

    std::uint32_t player = START; // Player always beginns from the start

    std::cout<<"Welcome to Jumani try to escape it by moving with  a and d ! " << std::endl;
    while(true) // because we dont know how long the game will take
    {
        // read players input
        std::cin >> move;

        //evaluate players input
        if(player == GOAL)
        {
            std::cout << "You exited the Maze well done Choosen One !"<< std::endl;
            break;
        }

        else if(RIGHT==move)
        {
            //std::cout << "The player moved to the right !" << std::endl;
            player ++;
        }

        else if(LEFT==move && player != 0)
        {
            //std::cout << "The player moved to the left !" << std::endl;
            player --;
        }
        else
        {
            std::cout << "The player couldnt move. Try again !" << std::endl;
        }

        //Display of little graphic to show where the Player is
        for(std::uint32_t i=START; i<GOAL+1; i++)
        {
            if(player == i)
            {
                std::cout<<"P";
                continue;
            }
            else if (i==GOAL || i==START)
            {
                std::cout<<"|";
                continue;
            }
            std::cout<<".";
        }
        std::cout<<" Move: ";
    }
    return 0;
}
