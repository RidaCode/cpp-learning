#include "square.h"
#include <iostream>

int main()
{
    const int numToSquare = 5;
    std::cout << "a square has " << getSquareSides() << " side\n";
    std::cout << "a square of length 5 has perimeter length "
              << getSquarePerimeter(numToSquare);

    return 0;
}
