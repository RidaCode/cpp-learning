#include "calculateResult.h"

int calculateResult(int firstNum, int secondNum, std::string operatorSign)
{
    if (operatorSign == "+") {
        return firstNum + secondNum;
    }
    else if (operatorSign == "-") {
        return firstNum - secondNum;
    }
    else if (operatorSign == "*") {
        return firstNum * secondNum;
    }
    else if (operatorSign == "/") {
        return firstNum / secondNum;
    }

    return 0;
}
