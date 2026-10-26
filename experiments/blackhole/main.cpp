#include <iostream>
int main()
{
blackhole:
    std::cout << "You are in the blackhole CTRL+C\n";

    goto blackhole;
    return 0;
}
