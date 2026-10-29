#include <iostream>
unsigned int blackHole()
{
    static unsigned int s_state{0};

    s_state = 8253729 * s_state + 2396403;

    return s_state % 32768;
}

int main()
{
    for (int i = 1; i <= 100; ++i) {
        std::cout << blackHole() << '\n';
    }

    return 0;
}
