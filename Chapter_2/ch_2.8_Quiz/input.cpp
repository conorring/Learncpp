#include <iostream>

int getInteger()
{
    std::cout << "Enter an integer: " << std::endl;
    int x{};
    std::cin >> x;

    return x;
}