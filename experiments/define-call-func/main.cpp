#include <iostream>

void doPrint()
{
    std::cout << "In doPrint()\n";
}

int main()
{
    std::cout << "In Main first print\n";
    doPrint();
    std::cout << "In Main second print\n";
    return 0;
}
