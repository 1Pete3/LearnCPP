#include <iostream>
#include <cstdlib>

class Foo {
private:
    int m_x{};
    int m_y{};
public:
    Foo(int x, int y) {
        std::cout << "Foo(" << x << "," << y << ") constructed" << std::endl;
    }

    void print() const {
        std::cout << "Foo(" << m_x << ", " << m_y << ")" << std::endl;
    }
};

int main()
{
    Foo foo{ 6,7 };
    foo.print();
    return EXIT_SUCCESS;
}

