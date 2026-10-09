#include <iostream>

int print(int x)
{
    return x;
}

int main()
{
    std::cout << "Enter a single char: ";

    char ch{};
    std::cin >> ch;

    std::cout << "You entered " << ch << ", which has ASCII code " << print(ch)
              << '.' << '\n';

    return 0;
}
