#include <iostream>

// test the scopes of variabls inside the main function

int main()
{
    int y{};

    if(1)
    {
        int x{5}; //x enters scope
        y = x;
    } //x goes out of scope here

    std::cout << y << '\n';

    return 0;
} // y goes out of scope here