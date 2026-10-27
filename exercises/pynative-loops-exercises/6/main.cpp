#include <iostream>
int main()
{
    const int multiplieTableNum{2};
    const int maxRange{10};

    for (size_t i = 1; i <= maxRange; i++) {
        std::cout << multiplieTableNum << " x " << i << " = "
                  << multiplieTableNum * i << '\n';
    }

    return 0;
}
