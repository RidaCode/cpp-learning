#include <iostream>

class Fraction {
    int m_numerator {0};
    int m_denominator {1};

  public:
    Fraction() = default;

    Fraction(int numerator, int denominator) :
        m_numerator {numerator},
        m_denominator {numerator}
    {
    }

    int getNumerator() const
    {
        return m_numerator;
    }

    int getDenominator() const
    {
        return m_denominator;
    }

    void setNumerator(int numerator)
    {
        m_numerator = numerator;
    }

    void setDenominator(int denominator)
    {
        m_denominator = denominator;
    }
};

Fraction getFraction()
{
    std::cout << "Enter a value for numerator: ";
    int numerator {};
    std::cin >> numerator;

    std::cout << "Enter a value for denominator: ";
    int denominator {};
    std::cin >> denominator;
    std::cout << '\n';

    return {numerator, denominator};
}

void printFraction(const Fraction& f)
{
    std::cout << f.getNumerator() << '/' << f.getDenominator() << '\n';
}

Fraction multiply(const Fraction& f1, const Fraction& f2)
{
    return {
        f1.getNumerator() * f2.getNumerator(),
        f1.getDenominator() * f2.getDenominator()
    };
}

int main()
{
    Fraction f1 {getFraction()};
    Fraction f2 {getFraction()};

    std::cout << "Your fractions multiplied together: ";

    printFraction(multiply(f1, f2));

    return 0;
}
