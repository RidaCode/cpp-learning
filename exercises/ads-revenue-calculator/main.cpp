#include <iostream>

struct AdRevenue {
    float numberOfAdsWatched{};
    float clickThroughRate{};
    float averageEarningsPerClickedAd{};
};

int64_t calculateRevenue(const AdRevenue& adRevenue)
{
    return static_cast<int64_t>(adRevenue.numberOfAdsWatched
                                * adRevenue.clickThroughRate
                                * adRevenue.averageEarningsPerClickedAd);
}

void printRevenue(const AdRevenue& adRevenue)
{
    std::cout << "You made for that day: " << calculateRevenue(adRevenue)
              << std::endl;
}

AdRevenue createAdRevenue()
{
    AdRevenue adRevenue{};
    std::cout << "Enter how many ads were watched: ";
    std::cin >> adRevenue.numberOfAdsWatched;

    std::cout << "Enter what percentage of users clicked on an ad: ";
    std::cin >> adRevenue.clickThroughRate;

    std::cout << "Enter the average earnings per clicked ad: ";
    std::cin >> adRevenue.averageEarningsPerClickedAd;

    return adRevenue;
}

// std::istream& operator>>(std::istream& in, AdRevenue& adRevenue)
// {
//     std::cout << "Enter how many ads were watched: ";
//     in >> adRevenue.numberOfAdsWatched;
//
//     std::cout << "Enter what percentage of users clicked on an ad: ";
//     in >> adRevenue.clickThroughRate;
//
//     std::cout << "Enter the average earnings per clicked ad: ";
//     in >> adRevenue.averageEarningsPerClickedAd;
//
//     return in;
// }

int main()
{
    AdRevenue userEnteredAdRevenue{createAdRevenue()};

    printRevenue(userEnteredAdRevenue);

    return 0;
}
