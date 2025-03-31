#include <iostream>

int main(){
    
    constexpr double gravity{9.8};

    if constexpr (gravity == 9.8)
        std::cout << "We are on Earth\n";
    else
        std::cout << "We are not on Earth\n";

    return 0;
}
