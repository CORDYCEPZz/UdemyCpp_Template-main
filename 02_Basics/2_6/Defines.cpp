# include <iostream>

#define NUM_Players 2
# define Mode_1

int main()
{
    #ifdef Mode_1
        std::cout << "Num Players: " << NUM_Players << std::endl;
    #else
        std::cout << "Num Players: " << NUM_Players << std::endl;
    #endif

    return 0;
}
