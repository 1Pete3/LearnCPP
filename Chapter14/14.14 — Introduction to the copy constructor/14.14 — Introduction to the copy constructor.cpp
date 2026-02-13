#include <iostream>
#include <cstdlib>

class Fraction {
private:
    int m_numerator{ 0 };
    int m_denominator{ 1 };
public:
    Fraction(int numerator = 0, int denominator = 1) :
        m_numerator{ numerator },
        m_denominator{ denominator } {

    }

    Fraction(Fraction& fraction) :
        m_numerator{ fraction.m_denominator },
        m_denominator{ fraction.m_denominator } {
        std::cout << "Copy constructor called" << std::endl;
    }

    void print() {
        std::cout << "Fraction(" << m_numerator << ", " << m_denominator << ")" << std::endl;
    }
};
int main()
{
    Fraction f{5,3};
    Fraction fCopy{ f };
    f.print();
    fCopy.print();
    return EXIT_SUCCESS;
}
