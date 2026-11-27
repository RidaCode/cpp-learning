#include <iostream>
#include <string>
class Ball {
    std::string m_color {"black"};
    double m_radius {10.0};

    void printBallInfo() const
    {
        std::cout << "Ball(" << m_color << ", " << m_radius << ")\n";
    };

  public:
    // NOTE: works as well BUT we need a better way
    // Ball(double radius) :
    //     m_color {"black"},
    //     m_radius {radius}
    // {
    //     printBallInfo();
    // }

    // NOTE: delegating constructor to another constructor below
    Ball(double radius) :
        Ball {"black", radius}
    {
    }

    Ball(const std::string_view color = "black", double radius = 10.0) :
        m_color {color},
        m_radius {radius}
    {
        printBallInfo();
    }
};

int main()
{
    Ball def {};
    Ball blue {"blue"};
    Ball twenty {20.0};
    Ball blueTwenty {"blue", 20.0};

    return 0;
}
