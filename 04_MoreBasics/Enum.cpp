#include <iostream>

//  enum: enumeration nutzt man um variabeln in kategorien zu unterteilen

enum PermissionLevel
{
    STUDENT,
    TUTOR,
    INSTRUCTOR,
    ADMIN
};



int main()
{
    PermissionLevel permission_lvl_marvin = PermissionLevel::STUDENT;
    PermissionLevel permission_lvl_jan = PermissionLevel::INSTRUCTOR;

    switch(permission_lvl_jan)
    {
        case PermissionLevel::STUDENT:
        {
            std::cout << "Hello Student! \n";
            break;
        }
        case PermissionLevel::TUTOR:
        {
            std::cout << "Hello Tutor! \n";
            break;
        }
        case PermissionLevel::INSTRUCTOR:
        {
            std::cout << "Hello Instructor! \n";
            break;
        }
        case PermissionLevel::ADMIN:
        {
            std::cout << "Hello Admin! \n";
            break;
        }
        default:
        {
            std::cout << "Unknown State! \n";
            break;
        }

    }

    return 0;
}
