#include <iostream>

int g_x{10}; // linker will see this value for g_x as we have declared it as external in main.cpp

// this function will be shadowed by the printSomething seen in main.cpp
void printSomething(){
    std::cout << g_x << '\n';
}
