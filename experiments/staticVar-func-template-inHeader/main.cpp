#include "printStatic.h"

void foobar();

int main()
{

    printStatic<int>();
    printStatic<int>();
    printStatic<int>();
    printStatic<int>();
    printStatic<int>();

    foobar();
    foobar();
    foobar();
    foobar();
    foobar();

    return 0;
}
