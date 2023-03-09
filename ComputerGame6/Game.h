#pragma once

#include <vector>


// Initilize movement
struct Coordinate
{
    unsigned int x_pos;
    unsigned int y_pos;
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

bool is_finished(const Coordinate &player);

void print_invalid();

bool Coordinate_is_obstacle(const Coordinate Cord, const std::vector<Coordinate> OBSTACLES);

void make_move(Coordinate &player, const std::vector<Coordinate> OBSTACLES);

void show_position(const Coordinate &player, const std::vector<Coordinate> OBSTACLES);

void game();
