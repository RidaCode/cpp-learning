#include <iostream>

int main()
{
    const int maxValue4Byte{2'147'483'647};

    // assume 4 byte integers
    int x{maxValue4Byte}; // the maximum value of a 4-byte signed integer
    std::cout << x << '\n';

    x = x + 1; // integer overflow, undefined behavior
    std::cout << x << '\n';

    return 0;
}
