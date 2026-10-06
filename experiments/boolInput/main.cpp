#include <iostream>
int main()
{

    std::cout << "Enter a bool integral e.g 0 or 1: ";

    bool enteredBool{true};
    std::cin >> enteredBool;

    // std::cout << std::boolalpha;

    std::cout << enteredBool << '\n';

    return 0;
}
