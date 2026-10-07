#include <iostream>

int main()
{

    char e{69};  // these number correspond to the ASCI table code/symbol
    char m{109}; // these number correspond to the ASCI table code/symbol
    char a{97};  // these number correspond to the ASCI table code/symbol

    // printing chars using the code sign from ASCI table
    std::cout << e << m << a << a << m << '\n';

    // printing out literal chars
    std::cout << 'a';
    std::cout << 'b';
    std::cout << 'c';

    std::cout << '\n';

    char initializedChar{'a'};
    std::cout << initializedChar;

    return 0;
}
