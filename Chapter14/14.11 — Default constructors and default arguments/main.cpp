#include <iostream>

class Foo {
    private:
        int m_x{};
        int m_y{};

    public:
        Foo() {
            std::cout << "Foo constructed" << std::endl;
        }

        Foo(int x = 0, int y = 0):
        m_x{x},
        m_y{y}
        {
            std::cout << "Foo(" << m_x << ", " << m_y << ") constructed" << std::endl;
        }
};

int main()
{
    Foo foo1{};
    Foo foo2{ 6,7 };
    return EXIT_SUCCESS;
}

