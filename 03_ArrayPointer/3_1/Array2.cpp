#include <iostream>
#include <cstdint>




int main()
{
    constexpr auto len = std::uint32_t{3U}; // ein constaner ausdruck der
    float vector1[len]{};
    float vector2[len]{};
    float vector3[len]{};

    // Proof that the code really initializes only zeros !
    std::cout << "Before Adding the Input \n";
    for(std::uint32_t i=0; i<len; i++)
    {
        std::cout << vector1[i] << " ";
    }
    std::cout << std::endl;

    for(std::uint32_t i=0; i<len; i++)
    {
        std::cout << vector2[i] << " ";
    }
    std::cout << std::endl;


    //  Now add the Input to the Vectors
    for(std::uint32_t i = 0; i < len; i++)
    {
        std::cout << "Please fill out the Vector1 enter the Value for the component " << i << ": ";
        std::cin >> vector1[i];
        std::cout << "\n";
    }

    for(std::uint32_t i = 0; i < len; i++)
    {
        std::cout << "Please fill out the Vector2 enter the Value for the component " << i << ": ";
        std::cin >> vector2[i];
        std::cout << "\n";
    }


    //  Show the vectors after adding the input
    std::cout << "After Adding the Input \n";
    for(std::uint32_t i=0; i<len; i++) // Der code zeigt das die wirklich nur nullen enthalten
    {
        std::cout << vector1[i] << " ";
    }
    std::cout << std::endl;

    for(std::uint32_t i=0; i<len; i++)
    {
        std::cout << vector2[i] << " ";
    }
    std::cout << std::endl;



    //  Add the components
    for(std::uint32_t i=0; i<len; i++)
    {
        vector3[i] = vector1[i] + vector2[i];
    }

    std::cout << "The sum of those 2 Vectors is the following. \n";
    for(std::uint32_t i=0; i<len; i++)
    {
        std::cout << vector3[i] << " ";
    }
    std::cout << std::endl;












    return 0;
}
