#include <iostream>

const double gravity{9.7};

void printGrav();

int main()
{
    const double gravity{9.8}; // this declaration shadows the global declaration
    std::cout << gravity << '\n';
    printGrav();

    return 0;
}

void printGrav()
{
    std::cout << gravity << '\n'; // uses globally declared constant
}
