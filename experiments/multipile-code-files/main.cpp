#include <iostream>

int add(int, int);

int main()
{
    const int firstNum = 20;
    const int secondNum = 10;

    std::cout << "The addition of two number is: " << add(firstNum, secondNum)
              << '\n';
    return 0;
}
