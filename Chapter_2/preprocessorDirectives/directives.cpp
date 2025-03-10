#include <iostream>

#define MY_NAME "Conor"

void foo()
{
    #define MY_NAME "Conor" // MY_NAME is defined in main even though it is written in a function
}

// We can #define the same MAcro twice and it will redefine to the most recent definition

int main()
{
    #ifdef MY_NAME
        std::cout << MY_NAME << std::endl;
    #endif

    return 0;
}