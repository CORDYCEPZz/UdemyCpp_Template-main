#include <iostream>
#include <cstdint>

int main()
{
    // Set limits for the game
    std::uint8_t START_x = 0U;
    std::uint8_t GOAL_x = 5U;
    std::uint8_t START_y = 0U;
    std::uint8_t GOAL_y = 5U;
    //std::uint8_t START_y = 0U;
    //std::uint8_t GOAL_y = 5U;

    // Player always beginns from the start
    std::uint8_t player_x = START_x;
    std::uint8_t player_y = START_y;
    // Initilize movement
    char LEFT ='a';
    char RIGHT ='d';
    char UP ='w';
    char DOWN ='s';
    char move;
    // Now play the game !
    std::cout<<"Welcome to Jumani try to escape it by moving with  a and d ! " << std::endl;
    while(true) // because we dont know how long the game will take
    {
        // read players input
        std::cin >> move;
        //evaluate players input
        if(player_x == GOAL_x-1 && player_y == GOAL_y)
        {
            std::cout << "You exited the Maze well done Choosen One !"<< std::endl;
            break;
        }

        else if(RIGHT==move && player_x != GOAL_x-1)
        {
            player_x ++;
        }

        else if(LEFT==move && player_x != 0)
        {
            player_x --;
        }

        else if(DOWN==move && player_y != GOAL_y)
        {
            player_y ++;
        }

        else if(UP==move && player_y != START_y)
        {
            player_y --;
        }
        else
        {
            std::cout << "The player couldnt move. Try again !" << std::endl;
        }
        //Display of little graphic to show where the Player is
        // das muss wieder eingerückt werden
        for(std::uint8_t y=START_y; y<GOAL_y+1; y++)
        {
            for(std::uint8_t x = START_x; x<GOAL_x+1; x++)
            {
                if(player_x == x && player_y == y && player_x != GOAL_x) // Player position
                {
                    std::cout<<"P";
                    continue;
                }
                else if(x == GOAL_x && y==GOAL_y) // Exit Position
                {
                    std::cout<<"E"<<std::endl;
                    continue;
                }
                else if(x==GOAL_x) // Make a Jump after each line
                {
                    std::cout<<""<<std::endl;
                    continue;
                }
                std::cout<<".";
            }
        }
        std::cout<<"" << std::endl;
        std::cout<<"Move: ";
    }
    return 0;
}
