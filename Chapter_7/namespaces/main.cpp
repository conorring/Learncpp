#include "foo.h"
#include <iostream>

// There are two ways so far to use namespaces
// First we can declare them in main.cpp and define functions inside the namespace for use in main()
// Or we can define them separately in foo.cpp and use a header file to declare them

/*
IMPORTANT: Cannot simply run main.cpp, we must build the code and then execute
Run C++ file only runs what is in the main.cpp itself
*/

namespace Goo
{
    int doSomething(int x, int y)
    {
        return x-y;
    }
}

int main()
{
    std::cout << Foo::doSomething(5, 7) << std::endl;
    std::cout << Goo::doSomething(5, 7);

    return 0;
}
