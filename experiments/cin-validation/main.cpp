#include <ios>
#include <iostream>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

bool clearFailedExtraction()
{
    // if cin is in failed mode
    if (!std::cin) {
        if (std::cin.eof()) { // if the user entered an EOF
            std::exit(0);     // exist program so no inf loop
        }

        std::cin.clear(); // reset cin from failed mode to normal mode
        ignoreLine();     // clear the buffer regardless

        return true;
    }

    return false;
}

double getDouble()
{
    for (;;) {
        std::cout << "Enter a double number: ";
        double enteredInput{};
        std::cin >> enteredInput;

        bool sucess{!clearFailedExtraction()};

        if (sucess)
            return enteredInput;
    }
}

int main()
{
    double enteredDouble{getDouble()};

    std::cout << "You Entered: " << enteredDouble << '\n';
}
