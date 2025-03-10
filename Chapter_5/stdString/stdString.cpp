#include <iostream>
#include <string>

void quizFunction();

int main()
{
    // std::string name{}; // initialise name as an empty string
    // name = "John";      // name can be changed to a different string now

    // // If we want to read in a string, std::cin stops when it reads a whitespace
    // // it is therefore safer to use std::getline()

    // std::cout << "Enter your name" << '\n';
    // std::getline(std::cin >> std::ws, name);
    // // std::cout << name << '\n';
    // std::cout << "The length of your name is " << name.length() << '\n';

    quizFunction();

    return 0;
}

void quizFunction()
{
    std::cout << "Please enter your full name" << '\n';
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Please enter your age" << '\n';
    int age{};
    std::cin >> age;

    int length_name{static_cast<int>(name.length())};
    std::cout << "Your age + the length of your name is: " << age + length_name << '\n';
}
