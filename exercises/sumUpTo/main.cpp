#include <iostream>
int sumUp(int upTo)
{
    int acc{};

    for (int i = 0; i <= upTo; i++) {
        acc += i;
    }
    return acc;
}

int main()
{
    std::cout << sumUp(5);
    return 0;
}
