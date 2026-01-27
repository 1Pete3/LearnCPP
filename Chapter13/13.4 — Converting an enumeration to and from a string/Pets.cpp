#include "Pets.h"

enum Pet /*: std::int16_t */ {
    cat,    // 0
    dog,    // 1
    pig,    // 2
    whale,  // 3
    raccoon // 4
};

constexpr std::string_view getPetName(Pet pet) {
    switch (pet) {
    case cat: return "cat";
    case dog: return "dog";
    case pig: return "pig";
    case whale: return "whale";
    case raccoon: return "raccoon";
    }
}

constexpr std::optional<Pet> getPetFromString(std::string_view sv) {
    if (sv == "cat") {
        return cat;
    }
    if (sv == "dog") {
        return dog;
    }
    if (sv == "pig") {
        return pig;
    }
    if (sv == "whale") {
        return whale;
    }
    if (sv == "raccoon") {
        return raccoon;
    }
    return {};
}

void petInput()
{
    std::cout << "Enter a pet: cat, dog, pig, whale, or raccoon: ";
    std::string input{};
    std::cin >> input;
    std::optional <Pet> pet{ getPetFromString(input) };

    if (!pet) {
        std::cout << "You entered an invalid pet >:^(" << std::endl;
    }
    else {
        std::cout << "You entered : " << getPetName(*pet) << std::endl;
    }
}