#include "Pets.h"

enum Color {
    black,
    red,
    blue,
};

constexpr std::string_view getColorName(Color color) {
    switch (color) {
    case black: return "black";
    case red: return "red";
    case blue: return "blue";
    default: return "???";
    }
}

int main()
{
    constexpr Color shirt{ blue };
    std::cout << "Your shirt is " << getColorName(shirt) << std::endl; 
    petInput();
    return EXIT_SUCCESS;
}

