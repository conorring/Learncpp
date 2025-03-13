#include <iostream>

// extern lets compiler know that g_x is defined elsewhere
// global variables have external linkage by default. If we were to get rid of the extern keyword
// the compiler would think we are declaring a new variable which would clash with the one in linkage.cpp
extern int g_x;

// static shields this function definition from the linker so no error occurs
// where there is two function definitions
static void printSomething(){
    std::cout << --g_x << '\n';
}

int main(){
    
    // printSomething thus refers to the function defined here not in linkage.cpp
    printSomething();
    return 0;

}
