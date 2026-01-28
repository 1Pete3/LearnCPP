#include <iostream>
#include <cstdlib>
#include <limits>
#include <optional>
#include <string>
#include <string_view>

enum Color {
    black,
    red,
    blue,
};

constexpr std::string_view getColorName(Color color) {
    switch(color) {
    case black: return "black";
    case red:   return "red";
    case blue:  return "blue";
    default:    return "???";
    }
}

constexpr std::optional<Color> getColorFromString(std::string_view sv) {
    if (sv == "black") {
        return black;
    }
    if (sv == "red") {
        return red;
    }
    if (sv == "blue") {
        return blue;
    }
    return {};
}

std::ostream& operator<<(std::ostream& out, Color color) {
    out << getColorName(color);
    return out;
}

std::istream& operator>>(std::istream& in, Color& tshirt) {
    std::string s{};
    in >> s; // get input from the user
    std::optional<Color>match{ getColorFromString(s) };
    if (match) {
        tshirt = *match;
        return in;
    }
    in.setstate(std::ios_base::failbit);
    return in;
}


int main()
{
    std::cout << "Enter a tshirt color: black, red, blue: ";
    Color tshirt{};
    std::cin >> tshirt;
    if (std::cin) {
        std::cout << "You picked color: " << tshirt << std::endl;
    }
    else {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Your color was not valid\n";
    }
    
    return EXIT_SUCCESS;
}
