//#define NDEBUG // Disables asserts
#include <iostream>
#include <cmath>
#include <cassert>

double calculateTimeUntilObjectHitsGround(double initialHeight, double gravity) {
    assert(gravity > 0.0 && "Gravity less than 0.0");
    if (initialHeight <= 0.0) {
        return 0.0;
    }
    return std::sqrt((2.0 * initialHeight) / gravity);
}

int main()
{
    std::cout << "Took " << calculateTimeUntilObjectHitsGround(100, -9.8) << " second(s)\n";
    //assert(false && "Triggered assert");
    return EXIT_SUCCESS;
}

