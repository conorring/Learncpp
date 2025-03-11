#include <iostream>

const int g_y{1};
constexpr int g_w{2};

void printSomething(){
    std::cout << g_y << '\n';
    std::cout << g_w << std::endl;
}

int main(){

    printSomething();

    int g_y{5};                 // another example of shadowing
    std::cout << g_y << '\n';

    printSomething();
    
    return 0;
}
