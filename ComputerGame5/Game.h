#pragma once


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
constexpr static auto START = Coordinate{.x_pos = 0, .y_pos = 0};
constexpr static auto GOAL =  Coordinate{.x_pos = 5, .y_pos = 5};



bool is_finished(const Coordinate &player);

void make_move(Coordinate &player);

void show_position(const Coordinate &player);

void game();
