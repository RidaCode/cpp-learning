#include <iostream>
#include <string>
#include <string_view>

std::string getPersonName(int personNum)
{
    std::cout << "Enter the name of the person #" << personNum << ": ";
    std::string personName{};
    std::getline(std::cin >> std::ws, personName);

    return personName;
}

int getPersonAge(std::string_view personName)
{
    std::cout << "Enter the age of " << personName << ':';
    int personAge{};
    std::cin >> personAge;

    return personAge;
}

bool isPersonOlderThan(int xAge, int yAge)
{
    if (xAge > yAge) {
        return true;
    }
    return false;
}

void personIsOlderThan(std::string_view xName, int xAge, std::string_view yName,
                       int yAge)
{
    std::cout << xName << " (age " << xAge << ") is older than " << yName
              << " (age " << yAge << ")." << '\n';
}

void personSameAgeAs(std::string_view xName, int xAge, std::string_view yName,
                     int yAge)
{
    std::cout << xName << " (age " << xAge << ") is the same as " << yName
              << " (age " << yAge << ")." << '\n';
}

void printResult(std::string_view xName, int xAge, std::string_view yName,
                 int yAge)
{
    if (isPersonOlderThan(xAge, yAge)) {
        personIsOlderThan(xName, xAge, yName, yAge);
    }
    else if (isPersonOlderThan(yAge, xAge)) {
        personIsOlderThan(yName, yAge, xName, xAge);
    }
    else {
        personSameAgeAs(xName, xAge, yName, yAge);
    }
}

int main()
{
    std::string firstPersonName{getPersonName(1)};
    int firstPersonAge{getPersonAge(firstPersonName)};

    std::string secondPersonName{getPersonName(2)};
    int secondPersonAge{getPersonAge(secondPersonName)};

    printResult(firstPersonName, firstPersonAge, secondPersonName,
                secondPersonAge);

    return 0;
}
