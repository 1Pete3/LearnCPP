#include <iostream>
#include <bitset>

enum Color {
    red,
    green,
    blue,
};

namespace Monsters {
    enum MonsterType {
        orc,
        goblin,
        troll,
        ogre,
        skeleton,
    };
}
namespace Flags {
    enum State {
        isHungry,
        isSad,
        isMad,
        isHappy,
        isLaughing,
        isAsleep,
        isDead,
        isCrying,
    };
}

int main()
{
    Color apple{ red };
    Color shirt{ green };
    Color cup{ blue };

    // Errors below
    /*Color socks{ white };
    Color hat{ 2 };*/

    std::bitset<8> me{};
    me.set(Flags::isHappy);
    me.set(Flags::isLaughing);

    std::cout << std::boolalpha;

    std::cout << "I am happy? " << me.test(Flags::isHappy) << std::endl;
    std::cout << "I am laughing? " << me.test(Flags::isLaughing) << std::endl;

    [[maybe_unused]] Monsters::MonsterType monster{ Monsters::troll };
    return EXIT_SUCCESS;
}
