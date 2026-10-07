#include <iostream>
int main()
{
    std::cout << "Enter a char: ";

    char enteredChar{};

    // .get instead of cin >> entered to capture whitespace
    std::cin.get(enteredChar);
    std::cout << enteredChar << '\n';

    // .get instead of cin >> entered to capture whitespace
    std::cin.get(enteredChar);
    std::cout << enteredChar << '\n';

    // .get instead of cin >> entered to capture whitespace
    std::cin.get(enteredChar);
    std::cout << enteredChar << '\n';

    return 0;
}
