#include <cstdlib>
#include <iostream>

class Foo {
private:
    int m_x{};
public:
    Foo(int x)
        : m_x{x}{ }
    int getX() const {
        return m_x;
    }
};

void printFoo(Foo f) {
    std::cout << f.getX() << std::endl;
}

class Dollars {
private:
    int m_dollars{};
public:
    // explicit prevents conversion constructor 5 will not be converted to Dollars in the main function
    explicit Dollars(int d)
        : m_dollars{ d } {

    }

    int getDollars() const { return m_dollars; }
};

void print(Dollars d) {
    std::cout << "$" << d.getDollars() << std::endl;
}

int main()
{
    printFoo(5);
    Dollars d1(5); // ok
    Dollars d2{ 5 }; // ok
    // 5 cannot be converted to a Dollar object -> print(5);
    print(d1);
    print(Dollars{ 5 }); // ok
    print(static_cast<Dollars>(5));
    return EXIT_SUCCESS;
}


