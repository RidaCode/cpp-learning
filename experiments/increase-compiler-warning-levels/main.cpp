/*
 * compiler should give us warnings
 g++ main.cpp -o main -pedantic-errors -Wall -Weffc++ -Wextra -Wconversion
 -Wsign-conversion
*/

void foo(int)
{
}

int main()
{
    unsigned int x{5};
    foo(x);

    return 0;
}
