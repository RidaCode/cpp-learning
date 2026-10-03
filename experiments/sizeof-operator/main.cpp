#include <climits> // for CHAR_BIT
#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <iostream>

int main()
{
    std::cout << "A byte is " << CHAR_BIT << " bits\n\n";

    std::cout << std::left; // left justify output

    const int streamWidth = 16;

    // NOTE: Bytes

    std::cout << std::setw(streamWidth) << "bool:" << sizeof(bool)
              << " bytes\n";
    std::cout << std::setw(streamWidth) << "char:" << sizeof(char)
              << " bytes\n";
    std::cout << std::setw(streamWidth) << "short:" << sizeof(short)
              << " bytes\n";
    std::cout << std::setw(streamWidth) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(streamWidth) << "long:" << sizeof(long)
              << " bytes\n";
    std::cout << std::setw(streamWidth) << "long long:" << sizeof(long long)
              << " bytes\n";
    std::cout << std::setw(streamWidth) << "float:" << sizeof(float)
              << " bytes\n";
    std::cout << std::setw(streamWidth) << "double:" << sizeof(double)
              << " bytes\n";
    std::cout << std::setw(streamWidth) << "long double:" << sizeof(long double)
              << " bytes\n";

    std::cout << "==============" << std::endl;
    // NOTE: Bit Sizes

    std::cout << std::setw(streamWidth) << "bool:" << sizeof(bool) * CHAR_BIT
              << " bits\n";
    std::cout << std::setw(streamWidth) << "char:" << sizeof(char) * CHAR_BIT
              << " bits\n";
    std::cout << std::setw(streamWidth) << "short:" << sizeof(short) * CHAR_BIT
              << " bits\n";
    std::cout << std::setw(streamWidth) << "int:" << sizeof(int) * CHAR_BIT
              << " bits\n";
    std::cout << std::setw(streamWidth) << "long:" << sizeof(long) * CHAR_BIT
              << " bits\n";
    std::cout << std::setw(streamWidth)
              << "long long:" << sizeof(long long) * CHAR_BIT << " bits\n";
    std::cout << std::setw(streamWidth) << "float:" << sizeof(float) * CHAR_BIT
              << " bits\n";
    std::cout << std::setw(streamWidth)
              << "double:" << sizeof(double) * CHAR_BIT << " bits\n";
    std::cout << std::setw(streamWidth)
              << "long double:" << sizeof(long double) * CHAR_BIT << " bits\n";

    return 0;
}
