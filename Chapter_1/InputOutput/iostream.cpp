#include <iostream> // for std::cout and std::cin

// Asks user for three integers and prints them to the console
int main()
{
     std::cout << "Enter three integers: "; // user inputs a number to be printed later
     int x{}, y{}, z{};                         // x will hold the user input
     std::cin >> x >> y >> z;                   //store user input in x
     std::cout << "You entered " << x << ", " << y << ", and " << z << ".\n";

    //  int k {0};
    //  int l {1};
    //  int both {k = l};

    //  std::cout << both << '\n';

    return 0;
}