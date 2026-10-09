#include <iostream>
int main()
{
    std::cout << "Enter a single char: ";

    char ch{};
    std::cin >> ch;

    int asci{static_cast<int>(ch)};

    std::cout << "You entered " << ch << ", which has ASCII code " << asci
              << '.' << '\n';

    return 0;
}
