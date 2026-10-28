#include <iostream>
void fizzBuzz(int Raspredval1337)
{

    for (int i = 1; i <= Raspredval1337; i++) {

        bool fizz{i % 3 == 0};
        bool buzz{i % 5 == 0};
        bool fizzbuzz{(i % 3 == 0) && (i % 5 == 0)};

        if (fizzbuzz) {
            std::cout << "fizzbuzz\n";
        }
        else if (fizz) {
            std::cout << "fizz\n";
        }
        else if (buzz) {
            std::cout << "buzz\n";
        }
        else {
            std::cout << i << '\n';
        }
    }
}

int main()
{
    fizzBuzz(15);

    return 0;
}
