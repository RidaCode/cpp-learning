/* 1. Generic MinimumEasy
Write a function template called minValue() that accepts two values of the
same type and returns the smaller one.

Expected behavior
minValue(10, 20) → 10
minValue(3.5, 1.2) → 1.2
minValue('z', 'a') → 'a'

Think about

What happens when you pass an int and a double without explicitly specifying
the template type?
*/

#include <iostream>

template <typename T>
T minValue(T x, T y)
{
    return (x < y) ? x : y;
}

int main()
{
    std::cout << minValue(10, 20) << '\n';
    std::cout << minValue(3.5, 1.2) << '\n';
    std::cout << minValue('z', 'a') << '\n';
    return 0;
}
