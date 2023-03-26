#include <iostream>

#include "weapons.h"

int main()
{
    auto axe =  Axe{"fiskars", 12, 1.2F};
    auto bow =  Longbow{"Runans", 20, 2};

    axe.attack();
    bow.attack();

    return 0;
}
