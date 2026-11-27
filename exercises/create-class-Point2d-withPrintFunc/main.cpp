#include <cmath>
#include <iostream>

class Point2d {
    double m_x {};
    double m_y {};

  public:
    Point2d() = default;

    Point2d(double x, double y) :
        m_x {x},
        m_y {y}
    {
    }

    double getX() const
    {
        return m_x;
    }

    double getY() const
    {
        return m_y;
    }

    void print() const
    {
        std::cout << "Point2d (" << getX() << ", " << getY() << ")\n";
    }

    double distanceTo(Point2d destPoint)
    {
        double xDiff = getX() - destPoint.getX();
        double yDiff = getY() - destPoint.getY();

        return std::sqrt(xDiff * xDiff + yDiff * yDiff);
    }
};

int main()
{
    Point2d first {};
    Point2d second {3.0, 4.0};

    // Point2d third {4.0}; // should error if uncommented

    first.print();
    second.print();

    std::cout << "Distance between two points: " << first.distanceTo(second)
              << '\n';

    return 0;
}
