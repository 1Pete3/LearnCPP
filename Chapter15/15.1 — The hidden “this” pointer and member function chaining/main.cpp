#include <cstdlib>
#include <iostream>

class Simple {
private:
    int m_id{};
public:
    Simple(int id)
        : m_id{ id } {
    }
    int getID() const { return m_id; }
    void setID(int id) {  m_id = id; }
    void print() const { std::cout << m_id << std::endl; }
};

class Calc {
private:
    int m_value{};
public:
    Calc& add(int x) { m_value += x; return *this; }
    Calc& sub(int x) { m_value -= x; return *this; }
    Calc& mult(int x) { m_value *= x; return *this; }
    int getValue() {
        return m_value;
    }
    void reset() {
        *this = {}; // Value initialize a new object and overwrite the implicit object
    }
};

int main()
{
    Simple simple{ 1 };
    simple.setID(2);
    simple.print();

    Calc calc{};
    calc.add(5).sub(3).mult(4);
    std::cout << calc.getValue() << std::endl;
    calc.reset();
    std::cout << calc.getValue() << std::endl;
    return EXIT_SUCCESS;
}
