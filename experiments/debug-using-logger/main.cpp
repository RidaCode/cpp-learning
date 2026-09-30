#include <iostream>
#include <plog/Init.h>
#include <plog/Initializers/RollingFileInitializer.h>
#include <plog/Log.h>

int getUserInput()
{

    PLOGD << "getUserInput()";
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;

    return x;
}

int main()
{
    plog::init(plog::debug, "Logfile.txt");
    PLOGD << "main() called"; // Step 3: Output to the log as if you were
                              // writing to the consol
    int x{getUserInput()};
    std::cout << "You entered: " << x << '\n';
    return 0;
}
