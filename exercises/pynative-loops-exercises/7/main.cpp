#include <iostream>
int main()
{
    // NOTE: used question HINT, because idk how to do this,
    // my initial thoughts, convert to a string and check the length of the
    // string but he asked to make it using a while loop so.. idk

    long long number = 7568;

    int digitCount{0};

    while (number != 0) {
        number /= 10;
        digitCount++;
    }

    std::cout << digitCount << '\n';

    return 0;
}
