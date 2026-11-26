#include <iostream>
#include <string>
class Ball {
    std::string m_color {};
    double m_radius {};

  public:
    Ball(const std::string_view color, const double radius) :
        m_color {color},
        m_radius {radius}
    {
    }

    std::string_view getColor() const
    {
        return m_color;
    };

    double getRadius() const
    {
        return m_radius;
    }
};

void printBallInfo(const Ball& ball)
{
    // Ball(blue, 10)
    std::cout << "Ball(" << ball.getColor() << ", " << ball.getRadius()
              << ")\n";
}

int main()
{
    Ball blue {"blue", 10.0};
    printBallInfo(blue);

    Ball red {"red", 12.0};
    printBallInfo(red);

    return 0;
}
