#include <iostream>

int main()
{
    // signed integers are 4 bytes so have a max of 2^31 - 1
    int x{2147483647};
    std::cout << x << '\n';

    x = x + 1; //integer overflow
    std::cout << x << '\n';

    return 0;
}
