#include <iostream>
#include <string>
#include <string_view>

std::string_view getBoolName(bool b)
{
    std::string t{"true"};
    std::string f{"false"};

    if (b) {
        return t; // compiler maybe will warn, and it is warning
    }

    return f; // compiler maybe will warn, and it is warning
}

int main()
{
    std::string s{"Before"};

    std::string_view sv{s};

    s = "AfterRRRRRR"; // this will cause UB

    std::cout << sv << '\n'; // UB

    std::cout << getBoolName(true) << '\n'; // getBoolName -> UB

    return 0;
}
