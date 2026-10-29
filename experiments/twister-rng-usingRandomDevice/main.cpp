#include <iostream>
#include <random>
int main()
{
    std::mt19937 mt{std::random_device{}()};

    std::uniform_int_distribution die6{1, 6};

    for (int i = 0; i <= 40; ++i) {
        std::cout << die6(mt) << '\t';

        if (i % 10 == 0)
            std::cout << std::endl;
    }

    return 0;
}
