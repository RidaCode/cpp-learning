#include <iostream>

bool isPrime(int x)
{
    if (x == 2 || x == 3 || x == 5 || x == 7) {
        return true;
    }

    return false;
}

int main()
{
    std::cout << "Enter a number: ";
    int enteretNumber{};
    std::cin >> enteretNumber;

    if (isPrime(enteretNumber)) {
        std::cout << "The digit is prime \n";
    }
    else {
        std::cout << "The digit is not prime \n";
    }

    return 0;
}
