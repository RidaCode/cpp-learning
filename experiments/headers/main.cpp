#include "add.h"
#include <iostream>

int main()
{
    std::cout << "Enter two numbers to add: ";

    int x{};
    std::cin >> x;

    int y{};
    std::cin >> y;

    std::cout << x << " + " << y << " = " << add(x, y) << '\n';

    return 0;
}
