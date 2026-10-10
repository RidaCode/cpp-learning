#include <iostream>

double requestHeight()
{
    std::cout << "Enter the of the tower in meters: ";
    double heightEntered{};
    std::cin >> heightEntered;

    return heightEntered;
}

double getDistanceFallen(double height, double gravityConstant,
                         double inSeconds)
{
    double distanceFallen{
        (height - (gravityConstant * (inSeconds * inSeconds)) / 2)};

    return distanceFallen;
}

void printResult(double height, double gravityConstant, double inSeconds)
{
    double distanceFallen{
        getDistanceFallen(height, gravityConstant, inSeconds)};

    bool isAboveGround{distanceFallen > 0};

    if (isAboveGround) {
        std::cout << "At " << inSeconds
                  << " seconds, the ball is at height: " << distanceFallen
                  << " meters" << '\n';
    }
    else {
        std::cout << "At " << inSeconds
                  << " seconds, the ball is on the ground." << '\n';
    }
}

int main()
{
    double towerHeight{requestHeight()};

    double seconds{0};

    double gravityConstant{9.8};

    printResult(towerHeight, gravityConstant, seconds);
    seconds = seconds + 1;

    printResult(towerHeight, gravityConstant, seconds);
    seconds = seconds + 1;

    printResult(towerHeight, gravityConstant, seconds);
    seconds = seconds + 1;

    printResult(towerHeight, gravityConstant, seconds);
    seconds = seconds + 1;

    printResult(towerHeight, gravityConstant, seconds);
    seconds = seconds + 1;

    printResult(towerHeight, gravityConstant, seconds);
    seconds = seconds + 1;

    return 0;
}
