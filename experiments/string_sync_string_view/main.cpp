#include <iostream>

int main()
{
    std::string s{"Before"};
    std::cout << s << '\n';

    std::string_view sView{s};
    std::cout << sView << '\n';

    s = {"After"};
    std::cout << s << '\n';

    std::cout << sView << '\n';

    return 0;
}
