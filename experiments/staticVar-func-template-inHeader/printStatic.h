#pragma once
#include <iostream>

template <typename T>
void printStatic()
{
    static int something{0};
    std::cout << ++something << std::endl;
}
