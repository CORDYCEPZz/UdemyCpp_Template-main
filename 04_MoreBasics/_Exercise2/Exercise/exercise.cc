#include <iostream>

#include "exercise.h"


void show_player_stats(const PlayerData &player_info)
{
    std::cout << "The player " << player_info.id << " has " << player_info.health << " health and " << player_info.energy;
    std::cout << " and is standing at the position (" << player_info.x_pos << "," << player_info.y_pos << ") \n";
}
