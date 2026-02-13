#include <iostream>
#include <cstdlib>

class IntPair {
private:
    int m_x{};
    int m_y{};
public:
    IntPair(int x, int y)
        : m_x{ x }
        , m_y{ y } {

    }
    int x() const { return m_x; }
    int y() const { return m_y; }
};

void print(IntPair p) {
    std::cout << "(" << p.x() << ", " << p.y() << ")" << std::endl;
}


int main()
{
    // Case 1: Pass variables
    IntPair p{ 3,4 };
    print(p);

    // Case 2: Cosntruct temporary IntPair and pass to function
    print(IntPair{ 6,7 });

    // Case 3: Implicitly convert {8,9} to a temporary Intpair and pass to function
    print({ 8,9 });
    return EXIT_SUCCESS;
}
