#include <iostream>

int main()
{
    std::cout << "Enter three numbers seperated by <SPACE> ";

    int a{}, b{}, c{};
    std::cin >> a >> b >> c;

    std::cout << "You have entered " << a << ", " << b << ", and " << c << '.'
              << '\n';

    return 0;
}
