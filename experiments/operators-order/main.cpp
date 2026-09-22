#include <iostream>

int main()
{
    const int firstPriority{5};

    // I expect      vvvvvvvvvvvvvvvvv this to compute first
    std::cout << 2 + 2 * firstPriority << '\n'; // result will be 12, not 20

    return 0;
}
