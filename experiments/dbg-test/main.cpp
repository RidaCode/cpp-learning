#include "dbg-macro/dbg.h"
#include <cstdio>
#include <iostream>

int somethingElse;

int main()
{
    std::cout << "the output is : " << somethingElse;
    dbg(somethingElse);
    printf("something else %d", somethingElse);
    return 0;
}
