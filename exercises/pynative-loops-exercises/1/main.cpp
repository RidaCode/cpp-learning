#include <iostream>
int main()
{
    int N{10};

    std::cout << "Numbers from 1 to 10 are:";

    for (int i = 1; i <= N; ++i) {
        std::cout << " " << i;
    }

    return 0;
}
