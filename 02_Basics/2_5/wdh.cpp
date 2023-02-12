#include <iostream>
#include <cstdint>
// 1.) User-Input: side length of a square
// 2.) Compute the perimeter and area of a square.
// 3.) Print out the values to the console.

int main()
{
    // Initiate Start values
    std::uint16_t start = 0;
    std::uint16_t goal = 10;
    std::uint16_t position = start;
    std::uint16_t obstacle= 7;
    // Initiate movement commands
    char move_right = 'd';
    char move_left = 'a';
    char jump = 'e';
    char move;

    std::cout<<"You are trapped in a maze try to get out by moving left or right using (a) and (d)!"<<std::endl;
    do{
        // movement prompt
        // sonder cases müssen noch eingebaut werden sowas wie wenn er links ist geht es nicht weiter nach links
        std::cout<<"Where do you want to move towards?: ";
        std::cin>>move;
        if (move == move_right && position!=obstacle-1)
        {
            position++;
        }
        else if (move == move_left && position !=0)
        {
            position--;
        }
        else if(position == obstacle-1 && move ==jump)
        {
            position = position +2;
        }
        else
        {
            std::cout<<"Your input "<<move<<" is not allowed please try again! left(a), right(d), jump(e)"<<std::endl;
        }
        //  result plotten
        for(std::uint16_t i=start; i<=goal;i++)
        {
            if(i==position)
            {
                std::cout<<"P";
            }
            else if (i==obstacle)
            {
                std::cout<<"|";
            }

            else
            {
                std::cout<<"_";
            }
        }
        std::cout<<"\n\n"<<std::endl;
    }while(position !=goal);

    // Congratulation you won !
    std::cout<<"Lucky bastard you got out alive!"<<std::endl;
    return 0;
}
