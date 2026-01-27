#include <iostream>
#include <cstdlib>
#include <cstdint>

enum Pet /*: std::int16_t */ {
    cat,    // 0
    dog,    // 1
    pig,    // 2
    whale,  // 3
    raccoon // 4
};

int main()
{
    Pet firstPet = static_cast<Pet>(0);
    std::cout << "The value of the first pet is " << firstPet << std::endl;
    std::cout << "The size of the first pet is " << sizeof(firstPet) << std::endl;
    return EXIT_SUCCESS;
}

