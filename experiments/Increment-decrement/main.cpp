#include <iostream>
int main()
{
    int x{5};
    int y{++x};
    std::cout << x << "|" << y << '\n';

    int z{5};
    int k{z++};
    std::cout << z << "|" << k << '\n';
    return 0;
}
