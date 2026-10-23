#include <climits>
#include <iostream>
#include <limits>
int main()
{
    std::cout << std::numeric_limits<int>::min();
    std::cout << "Check the upper and lower limits of integer :\n";
    std::cout << "--------------------------------------------------\n";
    std::cout << "The maximum limit of int data type : "
              << std::numeric_limits<int>::max() << '\n';

    std::cout << "The minimum limit of int data type : "
              << std::numeric_limits<int>::min() << '\n';

    std::cout << "The maximum limit of unsigned int data type : "
              << std::numeric_limits<unsigned>::max() << '\n';

    std::cout << "The maximum limit of long long data type : "
              << std::numeric_limits<long long>::max() << '\n';

    std::cout << "The minimum limit of long long data type : "
              << std::numeric_limits<long long>::min() << '\n';

    std::cout << "The maximum limit of unsigned long long data type : "
              << std::numeric_limits<unsigned long long>::max() << '\n';

    std::cout << "The Bits contain in char data type : "
              << sizeof(char) * CHAR_BIT << '\n';

    std::cout << "The maximum limit of char data type : "
              << static_cast<int>(std::numeric_limits<char>::max()) << '\n';

    std::cout << "The minimum limit of char data type : "
              << static_cast<int>(std::numeric_limits<char>::min()) << '\n';

    std::cout << "The maximum limit of signed char data type : "
              << static_cast<int>(std::numeric_limits<signed char>::max())
              << '\n';

    std::cout << "The minimum limit of signed char data type : "
              << static_cast<int>(std::numeric_limits<signed char>::min())
              << '\n';

    std::cout << "The maximum limit of unsigned char data type : "
              << static_cast<int>(std::numeric_limits<unsigned char>::max())
              << '\n';

    std::cout << "The minimum limit of short data type : "
              << std::numeric_limits<short>::min() << '\n';

    std::cout << "The maximum limit of short data type : "
              << std::numeric_limits<short>::max() << '\n';

    std::cout << "The maximum limit of unsigned short data type : "
              << std::numeric_limits<unsigned short>::max() << '\n';

    return 0;
}
