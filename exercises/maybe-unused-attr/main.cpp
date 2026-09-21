#include <iostream>

int main()
{
    // v -> tell the compiler don't complain for not using these vars, which
    // allow for betteer performance.
    [[maybe_unused]] double a{1};
    [[maybe_unused]] double b{2};
    [[maybe_unused]] double c{3};

    return 0;
}
