#include <iostream>

// read a double from user
double readNumber()
{
    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;

    return x;
}


// read 2 input from user and mathematical operation to evaluate an expression
int main()
{
    double x{readNumber()};
    double y{readNumber()};

    std::cout << "Enter +, -, * or /: ";
    char c;
    std::cin >> c;

    if (c == '+')
        std::cout << x << c << y << " is " << x+y;

    else if (c == '-')
        std::cout << x << c << y << " is " << x-y;
    
    else if (c == '*')
        std::cout << x << c << y << " is " << x*y;

    else
        std::cout << x << c << y << " is " << x/y;

    return 0;
}
