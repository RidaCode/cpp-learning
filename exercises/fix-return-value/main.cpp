#include <iostream>

int getUserInput()
{
    std::cout << "Enter a number: ";

    int enteredNumber{};
    std::cin >> enteredNumber;

    return enteredNumber;
}

int main()
{
    int userInput{getUserInput()};
    std::cout << "Double the number entered: " << userInput * 2 << '\n';

    return 0;
}
