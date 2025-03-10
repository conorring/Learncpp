#include <iostream>

void doSomething()
{
    std::cout << "Hello World\n";
}

int main()
{
    int x{0};
    doSomething(); //cannot pass any argument to doSomething
    return 0;
}