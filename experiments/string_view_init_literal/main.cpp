#include <iostream>
#include <string_view>
int main()
{
    std::string_view sv{"CstyleStringLiteral"}; // that's fine
    std::cout << sv << '\n';

    using namespace std::string_literals; // for the s suffix
    std::string_view sv1{"CstyleStringLiteral"s};
    std::cout << sv1
              << '\n'; // UB = because can't intialize with string_literal

    using namespace std::string_view_literals;   // when using the sv suffix
    std::string_view sv2{"stringViewLiteral"sv}; // fine
    std::cout << sv2 << '\n';

    return 0;
}
