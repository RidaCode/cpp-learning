#include <algorithm>
#include <iostream>

void sort2(int& lesser, int& greater)
{
    if (lesser <= greater)
        return;

    std::swap(lesser, greater);

    /*  we could have done this as well  */
    // if (lesser > greater)
    //     std::swap(lesser, greater);
}

int main()
{
    int x{7};
    int y{5};

    std::cout << x << ' ' << y << '\n'; // should print 7 5

    sort2(x, y); // make sure sort works when values need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    sort2(x, y); // make sure sort works when values don't need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    return 0;
}
