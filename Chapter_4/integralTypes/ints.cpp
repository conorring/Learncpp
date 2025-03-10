#include <cstdint> // for fixed width ints
#include <cstddef> // used for std::size_t
#include <iostream>

int main()
{
    // std::int8_t x{65}; //Behaves like a char type
    // std::cout << x << '\n';

    // char y{65}; // outputs the corresponding ASCII symbol
    // std::cout << y << '\n';

    // std::cout << "The size of a short integer is: " << sizeof(short) << " bytes\n";
    // std::cout << "The size of a long integer is: " << sizeof(long) << " bytes\n";

    // int z { 5 };
    // std::size_t s { sizeof(z) }; // sizeof returns a value of type std::size_t, so that should be the type of s
    // std::cout << s << '\n';

    int w{};
    w = sizeof(std::size_t);
    std::cout << w << '\n';


     return 0;
}
