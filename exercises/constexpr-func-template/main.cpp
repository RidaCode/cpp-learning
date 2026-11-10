// define your factorial() function template here

#include <cassert>

template <int n>
constexpr unsigned long long factorial()
{
    static_assert(n >= 0, "Can't do that is number >= 0");

    unsigned long long result{1};

    for (int i{2}; i <= n; ++i) {
        result = result * static_cast<unsigned long long>(i);
    }

    return result;
}

int main()
{
    static_assert(factorial<0>() == 1);
    static_assert(factorial<3>() == 6);
    static_assert(factorial<5>() == 120);

    factorial<-3>(); // should fail to compile

    return 0;
}
