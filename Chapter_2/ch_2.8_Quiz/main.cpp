#include <iostream>

int getInteger(); // function prototype to read integer from user

int main()
{

    // intialise x and y using user input
    int x{getInteger()};
    int y{getInteger()};

    std::cout << x << " + " << y << " is " << x + y << '\n';

    return 0;
}