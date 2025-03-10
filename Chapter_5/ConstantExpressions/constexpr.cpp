#include <iostream>

int main()
{
    constexpr double x{3+4}; // can be used in a constant expression now
                             // a const double cannot only a const integral type can

    // std::cin >> x; would cause a compile error
    std::cout << x << '\n';
    
    return 0;
}
