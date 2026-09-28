#include "ReadNumber/readNumber.h"
#include "WriteAnswer/writeAnswer.h"

int main()
{
    // Get first number
    int firstNumber{readNumber()};

    // Get second number
    int secondNumber{readNumber()};

    // Print result of addition
    int result = firstNumber + secondNumber;
    writeAnswer(result);

    return 0;
}
