#include <iostream>

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

void print_vehicle_data(Vehicle &vehicle)
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
        std::cout << "unknown \n";
        break;
    }
}

void print_vehicle_data_pointer(Vehicle *vehicle)
{
    std::cout << "Vehicle ID: " << vehicle->id <<std::endl;
    std::cout << "Vehicle Velocity (km/h): " << vehicle->velocity << std::endl;
    std::cout << "Vehicle Lane Association: ";
    switch (vehicle->lane)
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
        std::cout << "unknown \n";
        break;
    }
}


int main()
{
    Vehicle v1 = {1, 100.0f, Lane::CENTER_LANE};
    print_vehicle_data(v1);
    print_vehicle_data_pointer(&v1);

    return 0;
}
