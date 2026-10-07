#include <iostream>

int main()
{

    std::cout << "Enter a boolean: ";
    std::cin >> std::boolalpha; // accept boolean case-sensitve input true/false

    bool b{};
    std::cin >> b; // insert whatever was in cin into b from line 7

    std::cout << "You have entered: " << b << '\n';

    return 0;
}
