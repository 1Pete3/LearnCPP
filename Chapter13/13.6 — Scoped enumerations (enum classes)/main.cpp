#include <iostream>
#include <utility>

enum class Animal {
    pig,
    chicken,
    goat,
    cat,
    dog,
    duck,
};

std::string_view getAnimalName(Animal animal) {
    using enum Animal;
    switch (animal) {
    case pig: return "pig";
    case chicken: return "chicken";
    case goat: return "goat";
    case cat: return "cat";
    case dog: return "dog";
    case duck: return "duck";
    default: return "???";
       }
}

void printNumberOfLegs(Animal animal) {
    std::cout << "A " << getAnimalName(animal) << " has ";
    using enum Animal;
    switch (animal) {
    case chicken:
    case duck:
        std::cout << 2;
        break;
    case pig:
    case goat:
    case cat:
    case dog:
        std::cout << 4;
        break;

    default:
        std::cout << "???";
        break;
    }
    std::cout << " legs." << std::endl;
}

int main()
{
    enum class Color {
        red,
        blue,
    };

    enum class Fruit {
        banana,
        apple
    };
    Color color{ Color::red };
    Fruit fruit{ Fruit::banana };
    
    // won't compile
    /*if (color == fruit){
        std::cout << "Color and fruit are not equal" << std::endl;
    }
    else {
        std::cout << "color and fruit are not equal" << std::endl;
    }*/

    Color shirt{ Color::red };
    if (shirt == Color::red) {
        std::cout << "Shirt is equal to red, you can compare enumerations from the same scoped enumeration" << std::endl;
    }

    std::cout << "Underlying value of shirt: " << std::to_underlying(shirt) << std::endl;
    
    printNumberOfLegs(Animal::cat);
    printNumberOfLegs(Animal::duck);
    
    return EXIT_SUCCESS;
}