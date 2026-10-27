#include <iostream>

int main()
{
    // NOTE: used hint because idk math

    const int number{7568};

    int reversedNumber{0};
    int targetNumber{number};
    while (targetNumber != 0) {
        int lastDigit = targetNumber % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        targetNumber /= 10;
    }

    std::cout << "The reverse of " << number << " is: " << reversedNumber
              << '\n';

    return 0;
}
