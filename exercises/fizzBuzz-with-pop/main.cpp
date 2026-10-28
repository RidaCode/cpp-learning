#include <iostream>
void fizzBuzz(int Raspredval1337)
{

    for (int i = 1; i <= Raspredval1337; i++) {

        bool fizz{i % 3 == 0};
        bool buzz{i % 5 == 0};
        bool pop{i % 7 == 0};

        if (!fizz && !buzz && !pop) {
            std::cout << i;
        }

        if (fizz)
            std::cout << "fizz";

        if (buzz)
            std::cout << "buzz";

        if (pop)
            std::cout << "pop";

        std::cout << std::endl;
    }
}

int main()
{
    fizzBuzz(150);

    return 0;
}
