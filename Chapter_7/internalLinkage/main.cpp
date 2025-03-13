#include <iostream>

// extern lets compiler know that g_x is defined elsewhere
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
