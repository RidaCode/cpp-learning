#include <iostream>

int main()
{
    // ask the user to input
    std::cout << "Enter a number: ";
    // store user input
    int userInput{};
    std::cin >> userInput;
    // print user input
    std::cout << "You have entered the number: " << userInput << '\n';

    return 0;
}
