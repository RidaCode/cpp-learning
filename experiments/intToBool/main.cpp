#include <ios>
#include <iostream>

int main()
{
    bool x{0};
    bool y{1};
    // bool z{2}; <- not allowed
    bool z = 2; // <- this is allowed (copy intialization)

    std::cout
        << std::boolalpha; // this is just to print true/false instead of 0/1
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << z << '\n';
    std::cout << "Arom \n";

    return 0;
}
