#include <iostream>
#include <bitset>

void usingBitset() {
    std::bitset<8> bits{0b0000'0101};
    bits.set(3); // We now have 0000'1101
    bits.flip(4); // Flips bit to opposite 0001'1101
    bits.reset(4); // Sets bit to 0 0000'1101

    std::cout << "All the bits: " << bits << std::endl;
    std::cout << "Bit 3 has value: " << bits.test(3) << std::endl;
    std::cout << "Bit 4 has value: " << bits.test(4) << std::endl;
    std::cout << bits.size() << " bits are in the bitset" << std::endl;
    std::cout << bits.count() << " bits are set to true" << std::endl;

    std::cout << std::boolalpha; // Outputs true/false instead of 0/1
    std::cout << "All bits are true: " << bits.all() << std::endl;
    std::cout << "Some bits are true: " << bits.any() << std::endl;
    std::cout << "No bits are true: " << bits.none() << std::endl;

}

int main()
{
    usingBitset();
    return 0;
}
