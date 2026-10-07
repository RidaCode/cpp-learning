#include <iostream>
int main()
{
    std::cout << "Enter a number: ";
    int enteredNumber{};
    std::cin >> enteredNumber;

    if (enteredNumber == 0)
        std::cout << "The number you entered is EQUAL to Zero \n";
    else if (enteredNumber < 0)
        std::cout << "The number you entered is a NEGTIVE NUMBER\n";
    else
        std::cout << "The number you entered is NOT equal to Zero\n";

    return 0;
}
