#include <iostream>
#include <string_view>                     // not me oscarmlke
using namespace std::string_view_literals; // not me oscarmlke

int getNumber()
{
    static bool secondCall{};
    if (secondCall) {
        std::cout << "Enter second number: ";
    }
    else {
        std::cout << "Enter first number: ";
        secondCall = !secondCall;
    }

    int enteredNumber{};
    std::cin >> enteredNumber;

    return enteredNumber;
}

char getOperator()
{
    std::cout << "Enter a math operator: ";
    char operatorSign{};
    std::cin >> operatorSign;

    return operatorSign;
}

// this not me this is oscarmlke addition
bool isOperatorValid(char c)
{
    return "*%/+-"sv.contains(c);
}

void calculate(int x, int y, char operatorSign)
{
    switch (operatorSign) {
    case '+':
        std::cout << "Result is: " << x + y << '\n';
        break;
    case '-':
        std::cout << "Result is: " << x - y << '\n';
        break;
    case '*':
        std::cout << "Result is: " << x * y << '\n';
        break;
    case '%':
        std::cout << "Result is: " << x % y << '\n';
        break;
    case '/':
        std::cout << "Result is: " << x / y << '\n';
        break;
    default:
        std::cout << "ERROR: WRONG OPERATOR SIGN" << '\n';
        break;
    }
}

int main()
{
    // ask the user enter first number
    int firstNumber{getNumber()};

    // ask the user to enter operator
    char operatorSign{getOperator()};

    if (!isOperatorValid(
            operatorSign)) // this not me this is oscarmlke addition
        return 1;

    // ask the user enter second number
    int secondNumber{getNumber()};

    // print the result
    calculate(firstNumber, secondNumber, operatorSign);

    return 0;
}
