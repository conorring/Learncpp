#include <iostream>

/*
PRINT is only defined for this file. If I were to have the doSomething() function in another file where we do not define print then
calling the function doSomething in main() would cause "PRINT is not defined" to appear. The preprocessor scans this file for any # directives.
Once it has processed them it discards them. It scans the file top to bottom triggering the below scenario.
*/

void doSomething()
{
    #ifdef PRINT
        std::cout << "PRINT is defined\n";
    #endif

    #ifndef PRINT
        std::cout << "PRINT is not defined" << std::endl;
    #endif 
}

//Placing print below the function makes it so that "print is not defined" is shown

#define PRINT

int main()
{
    doSomething();

    return 0;
}