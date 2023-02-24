#include <iostream>

// automome Driving
namespace AD
{
enum class Lane
{
    RIGHT_LANE,
    CENTER_LANE,
    LEFT_LANE
};

struct Vehicle
{
    int id;
    float velocity;
    Lane lane;
};

void print_vehicle_data(const Vehicle &vehicle)
{
    std::cout << "Vehicle ID: " << vehicle.id <<std::endl;
    std::cout << "Vehicle Velocity (km/h): " << vehicle.velocity << std::endl;
    std::cout << "Vehicle Lane Association: ";
    switch (vehicle.lane)
    {
    case(Lane::RIGHT_LANE):
    {
        std::cout << "right lane \n";
       break;
    }
    case(Lane::CENTER_LANE):
    {
        std::cout << "middle lane \n";
        break;
    }
    case(Lane::LEFT_LANE):
    {
        std::cout << "left lane \n";
        break;
    }
    default:
    {
        std::cout << "unknown \n";
        break;
    }
    }
}
};


int main()
{
    const auto v1 =
        AD::Vehicle{.id = 1, .velocity = 100.0f, .lane = AD::Lane::CENTER_LANE};
    AD::print_vehicle_data(v1);

    return 0;
}
