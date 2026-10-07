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

    std::cout << x << " is equal to " << y << " ?" << '\n';
    std::cout << std::boolalpha;
    std::cout << isEqual(x, y);

    return 0;
}
