#include <iostream>
#include <cstdint>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <string>
#include <string_view>
#include <utility>
#include <algorithm>
#include <random>



struct Coordinate
{
    int x_pos;
    int y_pos;
};

constexpr static auto LEN_X = 5;
constexpr static auto LEN_Y = 5;
auto  OBSTACLE_VECTOR = std::vector<Coordinate>(1, {0,0});

void print_coord(const Coordinate &val)
{
    std::cout <<"(" << val.x_pos << ", " << val.y_pos << ")\n";
}

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
    static auto dist_with_zero =std::uniform_int_distribution<int>{0, LEN_X}; // als limit die spielfeldbegrenzung einsetzten !
    static auto dist_no_zero =std::uniform_int_distribution<int>{1, LEN_X};

    obstacle.x_pos = dist_with_zero(generator);
    //  only fill y with 0 if x is not 0 to avoid obstacle in spawn point
    if(obstacle.x_pos == 0)
    {
        obstacle.y_pos = dist_no_zero(generator);
    }
    else
    {
        obstacle.y_pos = dist_with_zero(generator);
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
}


void move_obstacles (std::vector<Coordinate> &obstacles)
{
    for(auto &val: obstacles)
    {
        random_step(val);
        if(val.x_pos == LEN_X+1)
        {
            val.x_pos--;
        }
        else if(val.x_pos == -1)
        {
            val.x_pos++;
        }
        if(val.y_pos == LEN_Y+1)
        {
            val.y_pos--;
        }
        else if(val.y_pos == -1)
        {
            val.y_pos++;
        }

    }
}




int main()
{
    init_obstacles(OBSTACLE_VECTOR);
    for(int j = 0; j<5; j++)
    {
        std::cout << "Iteration: " << j << "\n";
        for(const auto &val: OBSTACLE_VECTOR)
        {
            print_coord(val);
            move_obstacles(OBSTACLE_VECTOR);

        }
        std::cout << "\n" << std::endl;
    }
    return 0;
}
