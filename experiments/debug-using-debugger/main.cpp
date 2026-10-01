#include <iostream>
#include <string>
#include <vector>

struct Address {
    std::string city;
    int building;
};

struct User {
    std::string name;
    int age;
    Address address;
    std::vector<int> scores;
};

int main()
{
    User user{
        "Emaam",
        25,
        {
            "In the Galaxy",
            42,
        },
        {
            90,
            85,
            100,
        },
    };

    int total = 0;

    for (int score : user.scores) {
        total += score;
    }

    std::cout << "Total = " << total << '\n';

    return 0;
}
