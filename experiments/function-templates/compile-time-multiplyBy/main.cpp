/* Create multiplyBy() with one type parameter T and one non-type template
parameter N of type int.

Multiply the input by N.

Expected behavior

multiplyBy<3>(5) → 15

multiplyBy<10>(2.5) → 25.0

multiplyBy<-2>(7) → -14

Think about

Why must N be specified in the template argument list while T can be deduced? */

#include <iostream>

/* NOTE: By placing 'int N' first, you only need to explicitly provide N.
   The compiler will automatically deduce 'T' from the argument 'x'. */

template <int N, typename T>
constexpr T multiplyBy(T x)
{
    return x * N;
}

/* FIX: if you do it this way by placing 'T' first,
   when calling it, you need to say multiplyBy<T, .... , int>(T) */

// template <typename T,int N >
// constexpr T multiplyBy(T x)
// {
//     return x * N;
// }

int main()
{
    std::cout << multiplyBy<3>(5) << std::endl;
    std::cout << multiplyBy<10>(2.5) << std::endl;
    std::cout << multiplyBy<-2>(7) << std::endl;

    return 0;
}
