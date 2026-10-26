#include <iostream>
int main()
{
    int N{1};
    int result{0};

    while (N <= 10) {
        result = result + N;
        N++;
    }

    std::cout << result << std::endl;

    return 0;
}
