#pragma once

namespace
{// global variables
constexpr static unsigned int START_x = 0;
constexpr static unsigned int START_y = 0;
constexpr static unsigned int GOAL_x = 5;
constexpr static unsigned int GOAL_y = 5;
// Initilize movement
constexpr static char LEFT ='a';
constexpr static char RIGHT ='d';
constexpr static char UP ='w';
constexpr static char DOWN ='s';

struct Player
{
    unsigned int x_pos;
    unsigned int y_pos;
};
};


bool is_finished(const Player &player);

void make_move(Player &player);

void show_position(const Player &player);

void game();
