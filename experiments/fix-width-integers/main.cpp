#include <cstdint>
#include <iostream>
int main()
{
    const int maxValue{32767};

    std::int32_t x{maxValue};

    x = x + 1;

    std::cout << x << '\n';

    return 0;
}
