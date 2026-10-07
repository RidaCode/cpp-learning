#include <iostream>

bool isEqual(int x, int y)
{
    return x == y;
}

int main()
{
    std::cout << "Enter first number: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter second number: ";
    int y{};
    std::cin >> y;

    if (isEqual(x, y))
        std::cout << x << " and " << y << " are equal\n";
    else
        std::cout << x << " and " << y << " are not equal\n";

    return 0;
}
