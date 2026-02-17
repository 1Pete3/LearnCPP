#include <iostream>
#include <cstdlib>
#include <cmath>

class Point2d {
private:
    double m_x{0.0};
    double m_y{0.0};
public:
    Point2d() = default;
    Point2d(double x, double y)
        : m_x{ x }
        , m_y{ y } {

    }

    void print() {
        std::cout << "Point2d("<< m_x << ", " << m_y << ")" << std::endl;
    }

    double distanceTo(const Point2d& point)const{
        return std::sqrt((point.m_x - m_x) * (point.m_x - m_x) + (point.m_y - m_y) * (point.m_y - m_y));
    }
};

class Fraction {
private:
    int numerator{ 0 };
    int demonimator{1};
public:
    explicit Fraction(int x=0, int y=1)
        :numerator{x}
        , demonimator{y}{ }
    void getFraction()
    {
        std::cout << "Enter a value for numerator: ";
        std::cin >> numerator; // this is a member function, so we can access members directly
        std::cout << "Enter a value for denominator: ";
        std::cin >> demonimator;
        std::cout << '\n';
    }

    Fraction multiply(const Fraction& f) const
    {
        return Fraction{ numerator * f.numerator, demonimator * f.demonimator };
    }

    void printFraction() const
    {
        std::cout << numerator << '/' << demonimator << '\n';
    }
};


int main()
{
    Point2d first{};
    Point2d second{ 3.0, 4.0 };

    // Point2d third{ 4.0 }; // should error if uncommented

    first.print();
    second.print();

    std::cout << "Distance between two points: " << first.distanceTo(second) << '\n';

    Fraction f1{};
    f1.getFraction();

    Fraction f2{};
    f2.getFraction();

    std::cout << "Your fractions multiplied together: ";

    f1.multiply(f2).printFraction();
    return EXIT_SUCCESS;
}