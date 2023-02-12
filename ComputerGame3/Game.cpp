#include <iostream>
#include "Game.h"

// global variables
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

void make_move()
{
    std::cout << "Make your move: ";
    std::cin >> move;
    if(move == 'd')
    {
        player_x++ ;
    }
    else if(move == 'a' && player_x != 0)
    {
        player_x-- ;
    }
    else
    {
        std::cout << "Invalid Input please try again by pressing either (a) or (d)";
        make_move();
    }
}

void show_position()
{
    for(unsigned int i = START_x; i < GOAL_x; i++)
    {
        if(i == player_x)
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
    do
    {
        make_move();
        show_position();
    } while(player_x !=GOAL_x);

    std::cout << "Congratulations CHOOSEN ONE you exited the Maze !";
}
