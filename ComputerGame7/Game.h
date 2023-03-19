#pragma once

#include <vector>


// Initilize movement
struct Coordinate
{
    int x_pos;
    int y_pos;
};

enum class ConsoleInput
{
    Invalid,
    LEFT = 'a',
    RIGHT = 'd',
    UP = 'w',
    DOWN=  's',
};
// global variables
constexpr static auto NUM_OBSTACLES = 3U;
constexpr static auto LEN_X = 5;
constexpr static auto LEN_Y = 5;
constexpr static auto START = Coordinate{.x_pos = 0, .y_pos = 0};
constexpr static auto GOAL =  Coordinate{.x_pos = LEN_X, .y_pos = LEN_X};

//  Funktionen zum initiren von Obstacles und zum Bewegen der Hindernisse
bool obstacle_position_occupied(const Coordinate &obstacle, std::vector<Coordinate> obstacles, std::size_t current_index);// hier wird geprüft ob das obstacle dahin bewegen kann

void create_obstacle(Coordinate &obstacle);

void init_obstacles (std::vector<Coordinate>  &input);

void random_step(Coordinate &obstacle);

void move_obstacles (std::vector<Coordinate> &obstacles);


//  Functions for main
bool is_finished(const Coordinate &player);

void print_invalid();

bool Coordinate_is_obstacle(const Coordinate Cord, const std::vector<Coordinate> OBSTACLES); // hiermit wird geprüft ob der spieler sich dahin bewegen kann

void make_move(Coordinate &player, const std::vector<Coordinate> OBSTACLES);

void show_position(const Coordinate &player, const std::vector<Coordinate> OBSTACLES);

void game();
