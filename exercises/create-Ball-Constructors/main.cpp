#include <iostream>
#include <string>
class Ball {
    std::string m_color {};
    float m_radius {};

  public:
    Ball() :
        Ball("black", 10.0)
    {
    }

    Ball(const std::string_view color) :
        Ball(color, 10.0)
    {
    }

    Ball(float radius) :
        Ball("black", radius)
    {
    }

    Ball(const std::string_view color, float radius) :
        m_color {color},
        m_radius {radius}
    {
        std::cout << "Ball(" << m_color << ", " << m_radius << ")\n";
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
