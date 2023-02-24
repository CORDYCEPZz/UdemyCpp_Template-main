#include <iostream>
#include "Game.h"


bool is_finished(const Player &player)
{
    return (player.x_pos == GOAL_x-1 && player.y_pos == GOAL_y-1);
}

void make_move(Player &player)
{
    char move;
    std::cout << "Make your move: ";
    std::cin >> move;
    if(move == 'd' && player.x_pos != GOAL_x-1)
    {
        player.x_pos++ ;
    }
    else if(move == 'a' && player.x_pos != 0)
    {
        player.x_pos-- ;
    }
    else if(move == 'w' && player.y_pos != 0)
    {
        player.y_pos--;
    }
    else if(move == 's' && player.y_pos != GOAL_y-1)
    {
        player.y_pos++;
    }
    else
    {
        std::cout << "Invalid Input please try again by pressing either (a) or (d)";
        make_move(player);
    }
}

void show_position(const Player &player)
{
    for(unsigned int y = START_y; y < GOAL_y; y++)
    {
        for(unsigned int x = START_x; x < GOAL_x; x++)
        {
            if(x == player.x_pos && y == player.y_pos)
            {
                std::cout << "P";
            }
            else if(x == GOAL_x-1 && y == GOAL_y-1)
            {
                std::cout << "O";
            }
            else
            {
                std::cout << "_";
            }
        }
        std::cout << "\n";
    }
}

void game()
{
    auto player = Player{.x_pos = START_x, .y_pos = START_y};
    std::cout << "Welcome to Jumani try to escape it by moving with  (wasd) ! \n";
    do
    {
        make_move(player);
        show_position(player);
    } while(!is_finished(player));

    std::cout << "Congratulations CHOOSEN ONE you exited the Maze !";
}
