#include <iostream>

int main()
{
    bool x{};
    std::cout << x << '\n';

    bool y{!x};
    std::cout << y << '\n';

    bool z{true};
    std::cout << z << '\n';

    std::cout << true + true << '\n';
    std::cout << !false << '\n';
    std::cout << !0 << std::endl;

    std::cout << std::boolalpha; // prints bools as true or false
    std::cout << true + true << '\n';
    std::cout << !false << '\n';
    std::cout << !0 << std::endl;
    std::cout << std::noboolalpha; // to turn off conversion to true or false

    // std::cout will simply print true or false whenever it sees 1 or 0

    return 0;
}
