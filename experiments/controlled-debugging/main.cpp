#include <iostream>

// #define ENABLE_DEBUG // comment this to disable debuging

int getUserInput()
{
    // clang-format off
#ifdef ENABLE_DEBUG
std::cerr << "getUserInput() called\n";
#endif
    // clang-format on

    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    return x;
}

int main()
{
    // clang-format off
#ifdef ENABLE_DEBUG
std::cerr << "getUserInput() called\n";
#endif
    // clang-format on

    int x{getUserInput()};
    std::cout << "You entered: " << x << '\n';
    return 0;
}
