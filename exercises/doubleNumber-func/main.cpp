#include <iostream>

int doubleNumber(int num)
{
    return num * 2;
}

int main()
{
    const int number{6};
    std::cout << doubleNumber(number);
    return 0;
}
