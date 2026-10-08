#include <cstdint>
#include <iostream>
int main()
{
    std::cout << "Enter a number between 0-127: ";

    std::int8_t x{};

    // this prints out the Code of the symbol you entered
    std::cin >> x;
    std::cout << "You have entered: " << static_cast<int>(x) << '\n';

    std::cin >> x;
    std::cout << "You have entered: " << static_cast<int>(x) << '\n';

    // this prints out the Symbol based on the ASCI table
    std::cin >> x;
    std::cout << "You have entered: " << x << '\n';

    std::cin >> x;
    std::cout << "You have entered: " << x << '\n';

    return 0;
}
