#include <iostream>

int getInteger()
{
    std::cout << "Enter an integer: ";
    int enteredInput{};

    std::cin >> enteredInput;
    return enteredInput;
}
