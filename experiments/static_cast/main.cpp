#include <iostream>
void print(int x)
{
    std::cout << x << '\n';
}

int main()
{
    // this implicitly return a convert value to the caller -> warnings
    print(5.5);

    // this explicitly convert so no-warnings
    print(static_cast<int>(5.5));

    // floats
    print(5.505f);
    print(static_cast<int>(5.505f));

    // chars
    char ch{'A'};
    print(ch); // this prints 65 because implicitly converting to int by
               // print(int)

    return 0;
}
