#include <iostream>
#include "Game.h"


bool is_finished(const Coordinate &player)
{
    return (player.x_pos == GOAL.x_pos-1 && player.y_pos == GOAL.y_pos-1);
}

void make_move(Coordinate &player)
{
    auto move = ConsoleInput::Invalid;
    char move_temp;
    std::cout << "Make your move: ";
    std::cin >> move_temp;
    move = static_cast<ConsoleInput>(move_temp);

    switch(move)
    {
        case ConsoleInput::RIGHT:
        {
            if(player.x_pos != GOAL.x_pos-1)
            {
                player.x_pos++ ;

            }
            else
            {
                std::cout << "Invalid Input please try again by pressing either (a) or (d)\n";
            }
            break;
        }
        case ConsoleInput::LEFT:
        {
            if(player.x_pos != 0)
            {
                player.x_pos-- ;
            }
            else
            {
                std::cout << "Invalid Input please try again by pressing either (a) or (d)\n";
            }
            break;
        }
        case ConsoleInput::UP:
        {
            if(player.y_pos != 0)
            {
                player.y_pos-- ;
            }
            else
            {
                std::cout << "Invalid Input please try again by pressing either (a) or (d)\n";
            }
            break;
        }
        case ConsoleInput::DOWN:
        {
            if(player.y_pos != GOAL.y_pos-1)
            {
                player.y_pos++ ;
            }
            else
            {
                std::cout << "Invalid Input please try again by pressing either (a) or (d)\n";
            }
            break;
        }
        default:
        {
            std::cout << "Invalid Input please try again by pressing either (a) or (d) \n";
            make_move(player);
            break;
        }
    }
}


void show_position(const Coordinate &player)
{
    //std::cout << player.x_pos << " " << player.y_pos << "\n";
    for(unsigned int y = START.y_pos; y < GOAL.y_pos; y++)
    {
        for(unsigned int x = START.x_pos; x < GOAL.x_pos; x++)
        {
            if(x == player.x_pos && y == player.y_pos)
            {
                std::cout << "P";
            }
            else if(x == GOAL.x_pos-1 && y == GOAL.y_pos-1)
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
    auto player = START;
     std::cout << "Welcome to Jumani try to escape it by moving with  (wasd) ! \n";
    do
    {
        make_move(player);
        show_position(player);
    } while(!is_finished(player));

    std::cout << "Congratulations CHOOSEN ONE you exited the Maze !";
}
