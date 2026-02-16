#include <iostream>
#include <cstdlib>

struct Pair {
    int m_x{};
    int m_y{};

    constexpr int greater() const {
        return (m_x > m_y ? m_x : m_y);
    }
};

class NonAggPair // No longer aggregate
{
private:
    int m_x{};
    int m_y{};
public:
    NonAggPair(int x, int y)
        : m_x{ x }
        , m_y{ y } {

    }
    constexpr int greater()const {
        return (m_x > m_y ? m_x : m_y);
    }
};


int main()
{
    constexpr Pair p1{ 5,6 };
    std::cout << p1.greater() << std::endl; // evaluates at compile time or runtime
    constexpr int g{ p1.greater() }; // must evaluate at compile time

    constexpr NonAggPair p2{ 5,6 };

    return EXIT_SUCCESS;
}