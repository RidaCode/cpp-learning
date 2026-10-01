#include <iostream>

void a()
{
    std::cout << "a() called()" << std::endl;
}

void b()
{
    std::cout << "b() called()" << std::endl;
    a();
}

int main()
{

    a();
    b();

    return 0;
}
