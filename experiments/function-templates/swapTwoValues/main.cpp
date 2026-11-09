/* Write a function template swapValues() that swaps two variables of the same
type.

 * The changes must be visible to the caller.

 * Expected behavior:
a = 5, b = 10 → a = 10, b = 5
a = 'x', b = 'y' → a = 'y', b = 'x'

Think about

Why wouldn't passing both parameters by value work? */

#include <iostream>

template <typename T>
void swapValues(T a, T b)
{
    T temp{a};
    a = b;
    b = temp;

    std::cout << "a = " << a << ", b = " << b << '\n';
}

int main()
{
    swapValues(5, 10);
    swapValues('x', 'y');
    return 0;
}
