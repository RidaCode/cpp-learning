#include <iostream>
#include <string>
class Ball {
    std::string m_color {};
    float m_radius {};

  public:
    Ball() :
        m_color {"black"},
        m_radius {10.0}
    {
        std::cout << "Ball(" << m_color << ", " << m_radius << ")\n";
    }

    Ball(std::string_view color) :
        m_color {color},
        m_radius {10.0}
    {
        std::cout << "Ball(" << m_color << ", " << m_radius << ")\n";
    }

    Ball(float radius) :
        m_color {"black"},
        m_radius {radius}
    {
        std::cout << "Ball(" << m_color << ", " << m_radius << ")\n";
    }

    Ball(std::string color, float radius) :
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
