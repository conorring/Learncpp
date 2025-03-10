#include <iostream>


// function to read an input from user
int readNumber()
{
    std::cout << "Please enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

void writeAnswer(int x)
{
    std::cout << "The sum is: " << x << '\n';
}

int main()
{
    int x{readNumber()};

    x = x + readNumber();
    writeAnswer(x);

    return 0;
}