#include <iostream>
int main()
{
    int s1{-1};
    std::cout << s1 << std::endl;

    // wrap-around to the top 4......... cuz underflowing
    std::cout << static_cast<unsigned int>(s1)
              << std::endl; // explicit conversion

    // max possible value of unsigned int on our machine
    unsigned int u1{4294967295};

    // wrap-around to -1 cuz overflowing
    std::cout << static_cast<int>(u1) << std::endl; // explicit conversion

    return 0;
}
