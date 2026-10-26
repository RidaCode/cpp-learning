#include <iostream>
int main()
{
    int factorial{1};

    // checked hint, and used for loop
    for (size_t i = 1; i <= 5; i++) {
        factorial = factorial * i;
    }

    std::cout << factorial;

    return 0;
}
