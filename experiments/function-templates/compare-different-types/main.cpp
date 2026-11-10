/* Write areEqual() using two independent template type parameters T and U.
Return whether the two arguments compare equal.

Expected behavior

areEqual(5, 5.0) → true

areEqual(3, 4.0) → false

areEqual('A', 65) → true

Think about

What changes when the parameters use T and U instead of a single T? */

#include <iostream>

template <typename T, typename U>
bool areEqual(T x, U y)
{
    return x == y;
}

int main()
{
    std::cout << std::boolalpha;
    std::cout << areEqual(5, 5.0) << std::endl;
    return 0;
}
