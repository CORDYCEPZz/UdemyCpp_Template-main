#include <iostream>
#include <vector>
#include <string>
#include "Game.h"
auto OBSTACLE_VECTOR = std::vector<Coordinate>{{1,1}, {2,2}, {3,3}};


bool is_finished(const Coordinate &player)
{
    return (player.x_pos == GOAL.x_pos-1 && player.y_pos == GOAL.y_pos-1);
}

void print_invalid()
{
  std::cout << "Invalid Input please try again by pressing either (a) or (d)\n";
}

bool Coordinate_is_obstacle(const unsigned int x, const unsigned int y, const std::vector<Coordinate> OBSTACLES)
{
    for(const auto &[x_cor, y_cor] : OBSTACLES)
    {
        if((x == x_cor) && (y == y_cor))
        {
            return true;
        }
    }
    return false;
}

void make_move(Coordinate &player, const std::vector<Coordinate> OBSTACLES)
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
            if( Coordinate_is_obstacle(player.x_pos+1, player.y_pos, OBSTACLES))
            {
                print_invalid();
            }
            else if( (player.x_pos != GOAL.x_pos-1))
            {
                player.x_pos++ ;
            }
            else
            {
                print_invalid();
            }
            break;
        }
        case ConsoleInput::LEFT:
        {
            if( Coordinate_is_obstacle(player.x_pos-1, player.y_pos, OBSTACLES))
            {
                print_invalid();
            }
            else if(player.x_pos != 0)
            {
                player.x_pos-- ;
            }
            else
            {
                print_invalid();
            }
            break;
        }
        case ConsoleInput::UP:
        {
            if( Coordinate_is_obstacle(player.x_pos, player.y_pos-1, OBSTACLES))
            {
                print_invalid();
            }
            else if(player.y_pos != 0)
            {
                player.y_pos-- ;
            }
            else
            {
                print_invalid();
            }
            break;
        }
        case ConsoleInput::DOWN:
        {
            if( Coordinate_is_obstacle(player.x_pos, player.y_pos+1, OBSTACLES))
            {
                print_invalid();
            }
            else if(player.y_pos != GOAL.y_pos-1)
            {
                player.y_pos++ ;
            }
            else
            {
                print_invalid();
            }
            break;
        }
        default:
        {
            print_invalid();
            make_move(player, OBSTACLE_VECTOR);
            break;
        }
    }
}


void show_position(const Coordinate &player, const std::vector<Coordinate> OBSTACLES)
{
    auto game_state = std::vector<std::string>(LEN_Y, std::string(LEN_X, static_cast<int>('_')));
    for(unsigned int y = START.y_pos; y < GOAL.y_pos; y++)
    {
        for(unsigned int x = START.x_pos; x < GOAL.x_pos; x++)
        {
            if(x == player.x_pos && y == player.y_pos)
            {
                game_state[y][x] = 'P';
            }
            else if(x == GOAL.x_pos-1 && y == GOAL.y_pos-1)
            {
                game_state[y][x] = 'O';
            }
            else if(Coordinate_is_obstacle(x, y, OBSTACLES))
            {
                game_state[y][x] = '|';
            }
        }
        std::cout << "\n";
    }
    for(const auto &val: game_state)
    {
        std::cout << val << "\n";
    }
}

void game()
{
    auto player = START;
    std::cout << "Welcome to Jumani try to escape it by moving with  (wasd) ! \n";
    do
    {
        make_move(player, OBSTACLE_VECTOR);
        show_position(player, OBSTACLE_VECTOR);
    } while(!is_finished(player));

    std::cout << "Congratulations CHOOSEN ONE you exited the Maze !";
}
