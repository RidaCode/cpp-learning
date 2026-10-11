#include <iostream>

void someFunc(){
#define gravity 9.8
}

void printGravity(double gravity)
{
    std::cout << "You entered the gravity: " << gravity << '\n';
}

int main()
{
    printGravity(3.6);

    return 0;
}
