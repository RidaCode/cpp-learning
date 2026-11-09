/* Create a function template printValue() that prints a value.
Test it with an int, double, char, and std::string.


Expected behavior

printValue(42) → 42
printValue(3.14) → 3.14
printValue("Hello") → Hello

Think about

What must a type support for this template to compile? */

#include <iostream>

template <typename T>
void printValue(T x)
{
    std::cout << x << '\n';
}

int main()
{
    printValue(42);
    printValue(3.14);
    printValue("Hello");

    return 0;
}
