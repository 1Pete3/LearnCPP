#include <iostream>
#include <cstdlib>
#include <string_view>
// Question 1
struct Monster {
    enum monsterType {
        ogre,
        dragon,
        orc,
        Giant_Spider,
        slime
    };
    monsterType type{};
    std::string name{};
    int health{ };
};


constexpr std::string_view getMonsterTypeString(Monster::monsterType type) {
    switch (type) {
    case Monster::ogre:
        return "Ogre";
    case Monster::dragon:
        return "Dragon";
    case Monster::orc:
        return "Orc";
    case Monster::Giant_Spider:
        return "Giant Spider";
    case Monster::slime:
        return "Slime";
    }
    return "Unknown";
}

void printMonster(const Monster& monster) {
    std::cout << "This " << getMonsterTypeString(monster.type) << " is named " << monster.name << " and has " << monster.health << " health." << std::endl;
}

//Question 2
template <typename T>
struct Triad {
    T first{};
    T second{};
    T third{};
};

template<typename T>
Triad(T, T, T) -> Triad<T>;

template<typename T>
void print(const Triad<T>& t) {
    std::cout << '[' << t.first << ", " << t.second << ", " << t.third << ']';
}

int main()
{
    Monster ogre{ Monster::ogre, "Shrek", 99999999 };
    Monster slime{ Monster::slime, "Blob", 10 };
    printMonster(ogre);
    printMonster(slime);
    Triad t1{ 1,2,3 };
    print(t1);
    Triad t2{ 1.2,3.4,5.6 };
    print(t2);
  return EXIT_SUCCESS;
}
