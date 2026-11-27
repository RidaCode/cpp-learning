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
    Ball()
    {
        printBallInfo();
    }

    Ball(const std::string_view color) :
        m_color {color}
    {
        printBallInfo();
    }

    Ball(float radius) :
        m_radius {radius}
    {
        printBallInfo();
    }

    Ball(const std::string_view color, float radius) :
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
