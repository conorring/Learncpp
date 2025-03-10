#include <iostream>

void print(int x)
{
    std::cout << x << '\n';
}

int main()
{
    char x{'5'};
    print(x);
    
    static_cast<int>(x);
    std::cout << x << '\n';

    std::cout << static_cast<int>('A') << '\n';

    /*
    ***WARNING***
    static cast does not convert the variable but instead returns 
    a casted value while taking the variable as an input to cast
    */

    return 0;
}
