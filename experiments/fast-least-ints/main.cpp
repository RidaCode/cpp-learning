#include <cstdint> // for fast and least types
#include <iostream>

int main()
{
    const int leastNfast{8};

    std::cout << "least 8:  " << sizeof(std::int_least8_t) * leastNfast
              << " bits\n";
    std::cout << "least 16: " << sizeof(std::int_least16_t) * leastNfast
              << " bits\n";
    std::cout << "least 32: " << sizeof(std::int_least32_t) * leastNfast
              << " bits\n";
    std::cout << '\n';

    std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * leastNfast
              << " bits\n";
    std::cout << "fast 16: " << sizeof(std::int_fast16_t) * leastNfast
              << " bits\n";
    std::cout << "fast 32: " << sizeof(std::int_fast32_t) * leastNfast
              << " bits\n";

    return 0;
}
