#include <iostream>

int main()
{
    std::cout << "Enter a number: ";

    int enteredNumber{};
    std::cin >> enteredNumber;

    std::cout << "Double the number entered: " << enteredNumber * 2 << '\n';

    return 0;
}
