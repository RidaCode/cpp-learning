#include <iostream>
int main()
{
    constexpr int x{29};
    constexpr int y{30};

    std::cout << "The Sum of " << x << " and " << y << " is : " << x + y
              << '\n';

    return 0;
}
