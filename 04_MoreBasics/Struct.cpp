#include <iostream>
#include <cstdint>
#include <string>


//  enum: enumeration nutzt man um variabeln in kategorien zu unterteilen

enum PermissionLevel
{
    STUDENT,
    TUTOR,
    INSTRUCTOR,
    ADMIN
};

struct UserData
{
    std::string name;
    std::uint32_t id;
    PermissionLevel permissionLevel;
};

void print_user(UserData &user)
{
    std::cout << "The user " << user.name << " has the ID " << user.id << "and is a ";
    switch(user.permissionLevel)
    {
        case PermissionLevel::STUDENT:
        {
            std::cout << " a Student! \n";
            break;
        }
        case PermissionLevel::TUTOR:
        {
            std::cout << " a Tutor! \n";
            break;
        }
        case PermissionLevel::INSTRUCTOR:
        {
            std::cout << " an Instructor! \n";
            break;
        }
        case PermissionLevel::ADMIN:
        {
            std::cout << " an  Admin! \n";
            break;
        }
        default:
        {
            std::cout << " a Unknown! \n";
            break;
        }
    }
}



int main()
{
/*  //  die drei variablen sind alle dem User Jan zugeschrieben sie sind aber nur lose im code obwohl sie miteinander zusammenhängen
    std::uint32_t id_jan = 10;
    std::string name_jan = "Jan";
    PermissionLevel permission_lvl_jan = PermissionLevel::INSTRUCTOR; */

    UserData Jan = {"Jan" , 180132328, PermissionLevel::INSTRUCTOR};
    print_user(Jan);
    UserData Marvin {"Marvin", 218212396, PermissionLevel::TUTOR};
    print_user(Marvin);


    return 0;
}
