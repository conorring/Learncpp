#include <iostream>

int getValueFromUser()
{
    std::cout << "Please input an integer\n";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int v {getValueFromUser()};
    std::cout << v << '\n';
}