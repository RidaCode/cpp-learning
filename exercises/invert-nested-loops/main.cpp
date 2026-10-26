#include <iostream>

int main()
{
    int rows{5};

    while (rows >= 1) {

        int colns{rows};
        while (colns >= 1) {
            std::cout << colns << ' ';
            --colns;
        }

        std::cout << std::endl;

        --rows;
    }

    return 0;
}
