#include <iostream>
struct Fraction {
    int numerator{0};
    int denominator{1};
};

Fraction multiplyTwoFractions(const Fraction& f1, const Fraction& f2)
{
    return {f1.numerator * f2.numerator, f1.denominator * f2.denominator};
}

void printFraction(const Fraction& f)
{
    std::cout << "Your fractions multiplied together: ";
    std::cout << f.numerator << '/' << f.denominator << '\n';
}

Fraction requestFraction()
{
    Fraction tempF{};

    std::cout << "Enter a value for the numerator: ";
    std::cin >> tempF.numerator;

    std::cout << "Enter a value for the denominator: ";
    std::cin >> tempF.denominator;

    std::cout << std::endl;

    return tempF;
}

int main()
{
    Fraction firstFraction{requestFraction()};
    Fraction secondFraction{requestFraction()};

    printFraction(multiplyTwoFractions(firstFraction, secondFraction));

    return 0;
}
