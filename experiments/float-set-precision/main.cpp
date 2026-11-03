#include <iomanip>
#include <iostream>
int main()
{
    float f = 0.123456789; // double value 0.123456789 has 9 significant
    digits,
        // but float can only support about 7
        std::cout << std::setprecision(9) << f
                  << '\n'; // std::setprecision defined in iomanip header

    // and here trying to store double literal into
    // float, need suffix f
    float x{0.1};
    float y{0.2};

    std::cout << x << '\n';
    std::cout << y << '\n';

    return 0;
}
