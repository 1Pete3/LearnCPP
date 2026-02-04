#include <iostream>
#include <cstdlib>
#include <string_view>

enum AnimalType {
    cat,
    dog,
    chicken,
};

constexpr std::string_view animalName(AnimalType type) {
    switch (type)
    {
    case cat:
        return "cat";
    case dog:
        return "dog";
    case chicken:
        return "chicken";
    default:
        return "";
    }
}
constexpr int numLegs(AnimalType type) {
    switch (type)
    {
    case cat:
        return 4;
    case dog:
        return 4;
    case chicken:
        return 2;
    default:
        return 0;
    }
}

struct Cat {
    std::string_view name{ "cat" };
    int numLegs{ 4 };
};

struct Dog {
    std::string_view name{ "dog" };
    int numLegs{ 4 };
};

struct Chicken {
    std::string_view name{ "chicken" };
    int numLegs{ 2 };
};

struct Snake {
    std::string_view name{ "snake" };
    int numLegs{ 0 };
};

int main()
{
    constexpr AnimalType animal{ cat };
    std::cout << "A " << animalName(animal) << " has " << numLegs(animal) << " legs" << std::endl;
    // Cat structAnimal;
    Snake structAnimal;
    std::cout << "A " << structAnimal.name << " has " << structAnimal.numLegs << " legs" << std::endl;
    
    
    return EXIT_SUCCESS;
}

