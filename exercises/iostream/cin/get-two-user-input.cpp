#include <iostream>
#include <ostream>

int main()
{
    std::cout << "Enter two numbers seperated by <SPACE>: ";

    int x{};
    int y{};

    std::cin >> x >> y;

    std::cout << "You have enter " << x << " and " << y << '\n';
    return 0;
}
