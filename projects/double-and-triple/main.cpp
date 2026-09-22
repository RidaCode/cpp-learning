#include <iostream>

int main()
{
    std::cout << "Enter a number: ";

    int enteredNumber{};
    std::cin >> enteredNumber;

    std::cout << "Double the number entered: " << enteredNumber * 2 << '\n';
    std::cout << "Triple the number entered: " << enteredNumber * 3 << '\n';

    return 0;
}
