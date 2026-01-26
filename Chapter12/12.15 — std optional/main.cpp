#include <iostream>
#include <cstdlib>
#include <optional>

std::optional<int> doIntDivision(int x, int y) {
    if (y == 0) {
        return {};
    }
    return x / y;
}

int main()
{
    std::optional<int> result1{ doIntDivision(20,5) };
    if (result1) {
        std::cout << "Result 1: " << *result1 << std::endl;
    }
    else {
        std::cout << "Result 1: failed " << std::endl;
    }
    std::optional<int>result2{ doIntDivision(5,0) };
    if (result2) {
        std::cout << "Result 2: " << *result2 << std::endl;
    }
    else {
        std::cout << "Result 2: failed " << std::endl;
    }
    return EXIT_SUCCESS;
}
