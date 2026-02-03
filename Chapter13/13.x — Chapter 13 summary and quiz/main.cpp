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

int main()
{
    Monster ogre{ Monster::ogre, "Shrek", 99999999 };
    Monster slime{ Monster::slime, "Blob", 10 };
    printMonster(ogre);
    printMonster(slime);
  return EXIT_SUCCESS;
}
