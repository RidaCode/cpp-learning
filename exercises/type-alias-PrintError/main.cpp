#include <iostream>

using PrintError = int;

PrintError printData()
{
    return 20;
}

int main()
{

    std::cout << printData() << std::endl;

    return 0;
}
