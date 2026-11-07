#include <iostream>

auto add(int x, int y) -> int;
auto multiply(int x, int y) -> int;

int main()
{
    std::cout << add(1, 3) << '\n';
    std::cout << multiply(6, 2) << '\n';
    return 0;
}

auto add(int x, int y) -> int
{
    return x + y;
}

auto multiply(int x, int y) -> int
{
    return x * y;
}
