#include <chrono>
#include <iostream>
#include <random>
int main()
{
    std::mt19937 rng{static_cast<std::mt19937::result_type>(
        std::chrono::steady_clock::now().time_since_epoch().count())};

    std::uniform_int_distribution die6{1, 6};

    for (int i = 1; i <= 40; ++i) {
        std::cout << die6(rng) << "\t";

        if (i % 10 == 0)
            std::cout << '\n';
    }

    return 0;
}
