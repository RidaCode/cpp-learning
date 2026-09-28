#include <iostream>

int readNumber()
{
    std::cout << "Enter a single Integer: ";
    int enteredInput{};
    std::cin >> enteredInput;

    return enteredInput;
}
