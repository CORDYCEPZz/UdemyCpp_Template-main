#include <iostream>

#include "exercise.h"

int main()
{
    PlayerData Player_1 = PlayerData{ .id = 1,
                            .x_pos = 3,
                            .y_pos = 3,
                            .health = 70,
                            .energy = 4,
                            .team =Alliance::ENEMY};

    PlayerData Player_2 = PlayerData{ .id = 2,
                            .x_pos = 5,
                            .y_pos = 5,
                            .health = 100,
                            .energy = 100,
                            .team = Alliance::ALLIED};



    show_player_stats(Player_1);
    show_player_stats(Player_2);
    return 0;
}
