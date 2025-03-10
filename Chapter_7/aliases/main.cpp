#include <iostream>

/*
This functionality came as a result of nested spaces which we will also show here. The idea is to provide a shortened
alias for a nested namespace simply for time saving reasons. Nested namespaces are namespaces defined inside another.
There are different syntaxes for defining them, this is the most clear to me
*/

namespace Foo
{
    namespace Goo   // Accessed via Foo:Goo
    {
        int add(int x, int y)
        {
            return x+y;
        }
    }

    void someFunctions() {} // resides only in Foo
}

namespace Foo::Goo
{
    int subtract(int x, int y)
    {
        return x-y;
    }
}

int main()
{
    std::cout << Foo::Goo::add(5, 7) << std::endl;

    namespace Active = Foo::Goo;
    std::cout << Active::add(5, 7) << std::endl;

    std::cout << Active::subtract(5, 7) << std::endl;
    
    // std::cout << Goo::add(5, 7); // produces an error

    return 0;
}
