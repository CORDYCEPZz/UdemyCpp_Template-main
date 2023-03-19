#include <iostream>
#include <vector>
#include <string>
#include "Game.h"
#include <random>

auto OBSTACLE_VECTOR = std::vector<Coordinate>(3, {0,0});


//  Player and Main-Game Funktions
bool is_finished(const Coordinate &player)
{
    return (player.x_pos >= GOAL.x_pos-1 && player.y_pos >= GOAL.y_pos-1); // größer gleich falls man in deas zielspringt !
}

void print_invalid()
{
  std::cout << "Invalid Input please try again by pressing either (a) or (d)\n";
}

bool Coordinate_is_obstacle(const  int x, const  int y, const std::vector<Coordinate> OBSTACLES)
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
    for(int y = START.y_pos; y < GOAL.y_pos; y++)
    {
        for( int x = (std::size_t)START.x_pos; x < GOAL.x_pos; x++)
        {
            if(x == player.x_pos && y == player.y_pos)
            {
                game_state[(std::size_t)y][(std::size_t)x] = 'P';
            }
            else if(x == GOAL.x_pos-1 && y == GOAL.y_pos-1)
            {
                game_state[(std::size_t)y][(std::size_t)x] = 'O';
            }
            else if(Coordinate_is_obstacle(x, y, OBSTACLES))
            {
                game_state[(std::size_t)y][(std::size_t)x] = '|';
            }
        }
        std::cout << "\n";
    }
    for(const auto &val: game_state)
    {
        std::cout << val << "\n";
    }
}

//  Obstacle Functions
bool obstacle_position_occupied(const Coordinate &obstacle, std::vector<Coordinate> obstacles, std::size_t current_index)
{
    for(std::size_t i=0; const auto &val: obstacles)
    {
        if(i != current_index)
        {
            if((val.x_pos == obstacle.x_pos) && (val.y_pos == obstacle.y_pos))
            {
                return true;
            }
        }
        i++;
    }
    return false;
}


void create_obstacle(Coordinate &obstacle)
{
    static auto seed = std::random_device{};
    static auto generator = std::mt19937{seed()};
    static auto dist_with_zero =std::uniform_int_distribution<int>{0, LEN_X-1};
    static auto dist_with_zero_y =std::uniform_int_distribution<int>{0, LEN_Y-1};
    static auto dist_no_zero_y =std::uniform_int_distribution<int>{1, LEN_Y-1};

    obstacle.x_pos = dist_with_zero(generator);
    //  only fill y with 0 if x is not 0 to avoid obstacle in spawn point
    if(obstacle.x_pos == 0)
    {
        obstacle.y_pos = dist_no_zero_y(generator);
    }
    else
    {
        obstacle.y_pos = dist_with_zero_y(generator);
    }
}


void init_obstacles (std::vector<Coordinate>  &input)
{
    for(std::size_t index = 0; auto &val: input)
    {
        create_obstacle(val);
        while(obstacle_position_occupied(val, OBSTACLE_VECTOR, index)) // wenn die Position besetzt ist solange itertieren bis sie unbesetzt ist
        {
            create_obstacle(val);
        }
        index++;
    }
}


void random_step(Coordinate &obstacle)
{
    static auto seed = std::random_device();
    static auto generator = std::mt19937(seed());
    static auto dist = std::uniform_int_distribution<int>{-1, 1};

    obstacle.x_pos += dist(generator);
    obstacle.y_pos += dist(generator);
    if(obstacle.x_pos >= LEN_X)
    {
        obstacle.x_pos--;
    }
    else if(obstacle.x_pos == -1)
    {
        obstacle.x_pos++;
    }
    if(obstacle.y_pos >= LEN_Y)
    {
        obstacle.y_pos--;
    }
    else if(obstacle.y_pos == -1)
    {
        obstacle.y_pos++;
    }
}

bool is_player_pos(Coordinate obstacle, Coordinate player_pos)
{
    if((player_pos.x_pos == obstacle.x_pos) && (player_pos.y_pos == obstacle.y_pos))
    {
        return true;
    }
    return false;
}


void move_obstacles (std::vector<Coordinate> &obstacles, Coordinate player_pos)
{
    for(auto &val: obstacles)
    {
        random_step(val);
        while(is_player_pos(val, player_pos))
        {
            random_step(val);
        }
    }
}





void game()
{
    auto player = START;
    init_obstacles(OBSTACLE_VECTOR);
    std::cout << "Welcome to Jumani try to escape it by moving with  (wasd) ! \n";
    do
    {
        show_position(player, OBSTACLE_VECTOR);
        move_obstacles(OBSTACLE_VECTOR, player);
        show_position(player, OBSTACLE_VECTOR);
        make_move(player, OBSTACLE_VECTOR);
    } while(!is_finished(player));

    std::cout << "Congratulations CHOOSEN ONE you exited the Maze !";
}
