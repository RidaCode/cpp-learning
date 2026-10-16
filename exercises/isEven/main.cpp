#include <iostream>

constexpr bool isEven(int x)
{
    return (x % 2 == 0);
}

int main()
{
    std::cout << "Enter an integer: ";
    int enteredNumber{};
    std::cin >> enteredNumber;

    //   ! is just so I can keep Odd print in 16, it doesn't matter if we flip
    //   the condition
    if (!isEven(enteredNumber)) {
        std::cout << enteredNumber << " is Odd number";
    }
    else {
        std::cout << enteredNumber << " is not an Odd number";
    }

    return 0;
}
