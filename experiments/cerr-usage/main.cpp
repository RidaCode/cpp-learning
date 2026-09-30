#include <iostream>
#include <print>

int getValue()
{
    // clang-format off
std::cerr << "getValue() called\n";
    // clang-format on
    return 4;
}

int main()
{
    // clang-format off
std::cerr << "main() called\n";
    // clang-format on

    std::cout << "this is cout";
    // std::cout << getValue << '\n';
    std::println("Hello {}", getValue());
    return 0;
}
