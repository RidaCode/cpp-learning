#include <iostream>

int main()
{
    // fallthrough shouldn't be placed at the last case in switch,
    // otherwise will complain but compile
    // fallthrough need to be on all of them
    switch (3) {
    default:
        std::cout << "DEFAULTING" << '\n'; // This is also executed
        [[fallthrough]];
    case 1:
        std::cout << 1 << '\n';
        [[fallthrough]];
    case 2:
        std::cout << 2 << '\n'; // Execution begins here
        [[fallthrough]];
    case 3:
        std::cout << 3 << '\n'; // This is also executed
        [[fallthrough]];
    case 4:
        std::cout << 4 << '\n'; // This is also executed
    }

    return 0;
}
