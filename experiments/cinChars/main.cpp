#include <iostream>
int main()
{
    std::cout << "Enter a char: ";
    char enteredChar{};

    std::cin >> enteredChar;
    std::cout << "You entered the char: " << enteredChar << '\n';

    std::cin >> enteredChar;
    std::cout << "You entered the char: " << enteredChar << '\n';

    std::cin >> enteredChar;
    std::cout << "You entered the char: " << enteredChar << '\n';

    return 0;
}
