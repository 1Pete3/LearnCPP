#include <cstdlib>
int main()
{
    // We can avoid literals with suffixes
    unsigned int u{ 5 }; // okay (we don't need to use `5u`)
    float f{ 1.5 };      // okay (we don't need to use `1.5f`)

    // We can avoid static_casts
    constexpr int n{ 5 };
    double d{ n };       // okay (we don't need a static_cast here)
    short s{ 5 };        // okay (there is no suffix for short, we don't need a static_cast here)

    float f{ 1.23456789 }; // not a narrowing conversion, even though precision lost!

    return EXIT_SUCCESS;
}