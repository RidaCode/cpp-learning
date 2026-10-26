#include <iostream>
int main()
{
    int sumEvenNums{0};
    int sumOddNums{0};

    int i{0};
    while (i <= 10) {
        if (i % 2 == 0)
            sumEvenNums += i;

        if (i % 2 == 1)
            sumOddNums += i;

        i++;
    }

    std::cout << "Results up to 10:\n";
    std::cout << "Sum of even numbers: " << sumEvenNums << '\n';
    std::cout << "Sum of odd numbers: " << sumOddNums << '\n';

    return 0;
}
