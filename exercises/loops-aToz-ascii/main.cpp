#include <iostream>
int main()
{
    char c{97};
    for (; c <= 122; ++c) {

        std::cout << "Symbol: " << c << ' ' << "ASCII: " << static_cast<int>(c);
        std::cout << std::endl;
    }

    return 0;
}
