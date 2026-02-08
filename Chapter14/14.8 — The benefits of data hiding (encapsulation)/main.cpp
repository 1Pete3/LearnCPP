#include <iostream>
#include <string>
#include <cstdlib>

class Yogurt {
    std::string m_flavor{ "vanilla" };

public:
    void setFlavor(std::string_view flavor) {
        m_flavor = flavor;
    }
    const std::string& getFlavor() const {
        return m_flavor;
    }
};

void print(const Yogurt& y) {
    std::cout << "The yogurt has the flavor " << y.getFlavor() << std::endl;
}

int main()
{
    Yogurt y{};
    y.setFlavor("cherry");
    print(y);

    return EXIT_SUCCESS;
}
