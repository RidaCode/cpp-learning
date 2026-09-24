#include <iostream>

int doubleNumber(int num)
{
    return num * 2;
}

int main()
{
    std::cout << "Enter a number: ";
    int numberEntered{};
    std::cin >> numberEntered;

    int numberDoubled{doubleNumber(numberEntered)};

    std::cout << "Double the number entered: " << numberDoubled << '\n';
    return 0;
}
