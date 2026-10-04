#include <iostream>

// assume int is 4 bytes
int main()
{
    unsigned int x{2};
    unsigned int y{3};

    std::cout << x - y << '\n'; // prints 4294967295 (incorrect!)

    return 0;
}
