#include <iostream>
#include <cstdlib>
class Something {
public:
    Something() = default;
    Something(const Something&) {
        std::cout << "Copy constructor called" << std::endl;
    }
};

Something rvo() {
    return Something{}; // Call something and copy constructor
}


Something nrvo() {
    Something s{}; // Calls Something()
    return s; // Calls copy contructor
}

int main()
{
    std::cout << "Initializing s1" << std::endl;
    Something s1{ rvo() }; // Call copy constructor

    std::cout << "Initializing s2" << std::endl;
    Something s2{ nrvo()}; // Call copy constructor
    return EXIT_SUCCESS;
}
