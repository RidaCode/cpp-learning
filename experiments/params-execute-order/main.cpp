#include <iostream>

int getNumber()
{
    std::cout << "Enter a number: ";
    int enteredNumber{};
    std::cin >> enteredNumber;

    return enteredNumber;
}

void printResult(int x, int y, int z)
{
    std::cout << x + (y * z);
}

int main()
{
    printResult(getNumber(), getNumber(), getNumber());
    return 0;
}
