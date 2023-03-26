#include "weapons.h"
#include <string>
#include <iostream>

// definiere die Funktionen aus der weapons klasse
std::string weapon::get_name() const
{
    return name;
}

float weapon::get_damage() const
{
    return damage;
}

float weapon::get_attackspeed() const
{
    return attackspeed;
}

bool weapon::get_is_single_handed() const
{
    return single_handed;
}

bool weapon::get_is_dual_handed() const
{
    return dual_handed;
}

// definiere die Funktionen von Axe und Longbow

void Axe::attack()
{
    std::cout << "Slash\n";
}

void Longbow::attack()
{
    std::cout << "Draws and Arrow and shoots\n";
}
