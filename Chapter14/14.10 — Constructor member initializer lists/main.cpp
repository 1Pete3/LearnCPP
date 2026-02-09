#include <iostream>
#include <cstdlib>
#include <string>
#include <string_view>
class Ball {
private:
    std::string color{"none"};
    double radius{0.0};
public:
    Ball(std::string_view color, double radius) :
        color{ color },
        radius{ radius } {
    }
    const std::string& getColor() const { return color; }
    double getRadius() const { return radius; }
};

void print(const Ball& ball) {
    std::cout << "Ball(" << ball.getColor() << ", " << ball.getRadius() << ")" << std::endl;
}
int main()
{

    Ball blue{ "blue", 10.0 };
    print(blue);

    Ball red{ "red", 12.0 };
    print(red);

    return EXIT_SUCCESS;
}
