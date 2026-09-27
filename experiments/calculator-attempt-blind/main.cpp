#include "CalculateResult/calculateResult.h"
#include "GetOperator/getOperator.h"
#include "GetUserInput/getUserInput.h"
#include "PrintResult/printResult.h"
#include <string>

int main()
{
    // Get user input (number)
    int firstNum{getUserInput()};

    // Get the operator + , - , * , /
    std::string operatorEntered{getOperator()};

    // Get another user input (number)
    int secondNum{getUserInput()};

    // Calculate the result
    int result{calculateResult(firstNum, secondNum, operatorEntered)};

    // Print the result
    printResult(result);

    return 0;
}
