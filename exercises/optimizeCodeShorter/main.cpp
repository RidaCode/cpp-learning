#include <iostream>

bool isAllowedToTakeFunRide(double height)
{
    return height >= 140.0;
}

int main()
{
    std::cout << "How tall are you? (cm)\n";
    double height{};
    std::cin >> height;

    if (isAllowedToTakeFunRide(height))
        std::cout << "Have fun!\n";
    else
        std::cout << "Sorry, you're too short.\n";

    return 0;
}
