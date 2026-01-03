#include <iostream>
#include <cstdlib>

unsigned int LCG16() {
     unsigned int s_state{ 0 };

    s_state = 8253729 * s_state + 2396403;
    return s_state % 32768;
}

int main()
{
    for (int i{ 1 }; i <= 100; ++i) {
        std::cout << LCG16() << '\t';
        if (i % 10 == 0) {
            std::cout << '\n';
        }

    }
    return EXIT_SUCCESS;
}