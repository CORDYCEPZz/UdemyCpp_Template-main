#pragma once
#include <cstdint>

enum class Alliance
{
    ALLIED,
    ENEMY,
};

struct PlayerData
{
    std::uint32_t id;
    float x_pos;
    float y_pos;
    std::uint32_t health;
    std::uint32_t energy;
    Alliance team;
};

void show_player_stats(const PlayerData &player_info);
