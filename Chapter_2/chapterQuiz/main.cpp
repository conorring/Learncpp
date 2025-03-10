//#include <iostream> //used for std::cout and std::cin
// iostream is actually not needed for main.cpp as none of the functions are used here

#include "io.h"

// main reads in two integers, adds them, and prints the answer
int main()
{
    int x{readNumber()};
    int y{readNumber()};

    writeAnswer(x+y);
    
    return 0;
}