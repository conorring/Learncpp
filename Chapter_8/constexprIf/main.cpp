// If we have an if statement involving a constant expression, we can indicate to the compiler that 
// condition can be evaluated at compile time. We can replace the if with the actual statement provided
// the constant expression holds true.

#include <iostream>

int main(){
    constexpr double gravity{9.8};

    if constexpr ( gravity == 9.8 )
        std::cout << "We are on Earth\n";
    else
        std::cout << "We are not on Earth\n";

    return 0;
}
