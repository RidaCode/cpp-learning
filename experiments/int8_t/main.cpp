#include <cstdint> // for fixed-width integers
#include <iostream>

int main()
{
    std::int8_t x{66};      // initialize 8-bit integral type with value 65
    std::cout << x << '\n'; // You're probably expecting this to print 65

    return 0;
}
