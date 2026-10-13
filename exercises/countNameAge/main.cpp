#include <iostream>
#include <string>

int main()
{

    // Enter your full name: John Doe
    std::cout << "Enter your full name: ";
    std::string enteredName{};
    std::getline(std::cin >> std::ws, enteredName);

    // Enter your age: 32
    std::cout << "Enter your age: ";
    int enteredAge{};
    std::cin >> enteredAge;

    // Your age + length of name is: 40
    int numOfChars{static_cast<int>(enteredName.length())};

    std::cout << "Your age + length of name is: " << enteredAge + numOfChars
              << '\n';

    return 0;
}
