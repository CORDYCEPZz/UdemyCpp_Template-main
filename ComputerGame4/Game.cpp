#include <iostream>
#include "Game.h"

namespace //durch den call sind die variablen nur in der game.cpp aufrudbar und nicht in der main
{// global variables
constexpr static unsigned int START_x = 0;
constexpr static unsigned int GOAL_x = 10;
// Player always beginns from the start
unsigned int player_x = START_x;  // position is a global variabel
// Initilize movement
constexpr static char LEFT ='a';
constexpr static char RIGHT ='d';
char move;
//  Add onds bei langer weile
//  - create an random obstacle somewhere between the 1st and 9th field
}
bool is_finished(const unsigned int player)
{
    return player == GOAL_x;
}

void make_move(unsigned int &player)
{
    std::cout << "Make your move: ";
    std::cin >> move;
    if(move == 'd')
    {
        player++ ;
    }
    else if(move == 'a' && player_x != 0)
    {
        player-- ;
    }
    else
    {
        std::cout << "Invalid Input please try again by pressing either (a) or (d)";
        make_move(player);
    }
}

void show_position(const unsigned int player)
{
    for(unsigned int i = START_x; i < GOAL_x; i++)
    {
        if(i == player)
        {
            std::cout << "P";
        }
        else
        {
            std::cout << "_";
        }
    }
    std::cout << "\n";
}

void game()
{
    std::cout << "Welcome to Jumani try to escape it by moving with  a and d ! \n";
    unsigned int player = START_x;
    do
    {
        make_move(player);
        show_position(player);
    } while(!is_finished(player));

    std::cout << "Congratulations CHOOSEN ONE you exited the Maze !";
}
