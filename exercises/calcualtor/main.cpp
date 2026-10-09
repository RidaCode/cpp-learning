#include <iostream>

double requestDouble()
{
    std::cout << "Enter a double value: ";
    double enteredValue{};
    std::cin >> enteredValue;
    return enteredValue;
}

char requestOperator()
{
    std::cout << "Enter +, -, *, or /: ";
    char enteredOperator{};
    std::cin >> enteredOperator;

    if (enteredOperator == '+' || enteredOperator == '-'
        || enteredOperator == '*' || enteredOperator == '/') {

        return enteredOperator;
    }

    return ' ';
}

double calculate(char operatorSign, double firstInput, double secondInput)
{
    if (operatorSign != ' ') {
        if (operatorSign == '+') {
            return firstInput + secondInput;
        }
        else if (operatorSign == '-') {
            return firstInput - secondInput;
        }
        else if (operatorSign == '*') {
            return firstInput * secondInput;
        }
        else if (operatorSign == '/') {
            return firstInput / secondInput;
        }
    }

    return 0;
}

int main()
{
    // Enter a double value: 6.2
    double firstInput{requestDouble()};

    // Enter a double value: 5
    double secondInput{requestDouble()};

    // Enter +, -, *, or /: *
    char operatorSign{requestOperator()};

    // result number
    double result{calculate(operatorSign, firstInput, secondInput)};

    if (operatorSign != ' ') {
        std::cout << firstInput << ' ' << operatorSign << ' ' << secondInput
                  << " is " << static_cast<int>(result) << '\n';
    }

    // 6.2 * 5 is 31
    return 0;
}
