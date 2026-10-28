#include <iostream>
int main()
{
    std::cout << "Every even number from 0 to 20. \n";

    for (size_t i = 0; i <= 20; i++) {
        if (i % 2 == 0) {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
