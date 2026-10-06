#include <ios>
#include <iostream>
int main()
{
    std::cout << std::boolalpha; // this toggle true/false instead of 0/1

    std::cout << !true << '\n';
    std::cout << !false << '\n';

    std::cout << std::noboolalpha; // this toggle to 0/1 instead of true/flase

    std::cout << true << '\n';
    std::cout << false << '\n';

    bool fliped{};                // initialize to false by default
    std::cout << !fliped << '\n'; // flips the bool value

    return 0;
}
