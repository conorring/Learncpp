# include "constants.h"
#include "math.h"
#include <iostream>

int main()
{
    std::cout << "What radius would you like to have? ";
    
    double radius{};
    std::cin >> radius;

    std::cout << "The area of a circle of radius " << radius << " is " << area_of_circle(radius, constants::pi) << std::endl;
    std::cout << "The volume of a sphere of radius " << radius << " is " << volume_of_sphere(radius, constants::pi) << std::endl;

    return 0;
}
