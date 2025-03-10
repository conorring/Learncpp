#include "io.h"
#include <iostream>

// function to read in an integer input from user
int readNumber()
{
    std::cout << "Please enter an integer: " << '\n';

    int temp{};
    std::cin >> temp;

    return temp;
}

// function to print the passed argument to screen
// function expects an integer
void writeAnswer(int x)
{
    std::cout << "The answer is: " << x << std::endl;
}