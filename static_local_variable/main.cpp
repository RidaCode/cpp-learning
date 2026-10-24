#include <iostream>

void increment()
{
    static int x{0};

    std::cout << ++x << '\n';
}

int main()
{
    increment();
    increment();
    increment();
    increment();
    increment();
    increment();

    return 0;
}
