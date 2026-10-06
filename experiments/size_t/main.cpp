#include <cstddef> // for std::size_t
#include <iostream>

int main()
{
    int x{5};

    std::size_t s{sizeof(x)};

    std::cout << s << '\n';

    return 0;
}
