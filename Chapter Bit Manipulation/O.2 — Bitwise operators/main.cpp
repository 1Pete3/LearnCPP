#include <cstdint>
#include "QuizQuestions.h"

void shiftLeft() {
    std::cout << "Shift Left" << std::endl;
    std::bitset<4> x{0b0011}; //0011
    std::cout << "X value : " << x << " Left shift 1 (0011 << 1) : " << (x << 1) << std::endl;
    std::cout << "X value : " << x << " Left shift 2 (0011 << 2) : " << (x << 2) << std::endl;
    std::cout << "X value : " << x << " Left shift 3 (0011 << 3) : " << (x << 3) << std::endl;
}

void shiftRight() {
    std::cout << "\nShift Right" << std::endl;
    std::bitset<4> x{0b1100};
    std::cout << "X value : " << x << " Right shift 1 (1100 >> 1) : " << (x >> 1) << std::endl;
    std::cout << "X value : " << x << " Right shift 2 (1100 >> 2) : " << (x >> 2) << std::endl;
    std::cout << "X value : " << x << " Right shift 3 (1100 >> 3) : " << (x >> 3) << std::endl;
}

void bitwiseNot() {
    std::cout << "\nBitwise NOT" << std::endl;
    std::bitset<4> b4{0b100}; // 0100
    std::bitset<8> b8{0b100}; // 0000 0100
    std::cout << "Initial values:" << std::endl;
    std::cout << "Bits: " << b4 << ' ' << b8 << std::endl;
    std::cout << "Values: " << b4.to_ulong() << ' ' << b8.to_ulong() << std::endl;
    b4 = ~b4;
    b8 = ~b8;

    std::cout << "\nAfter bitwise NOT: " << std::endl;
    std::cout << "Bits: " << b4 << ' ' << b8 << std::endl;
    std::cout << "Values: " << b4.to_ulong() << ' ' << b8.to_ulong() << std::endl;
}

void bitwiseOR() {
    std::bitset<4> x{0b0101};
    std::bitset<4> y{0b0110};
    std::cout << "\nBitwise OR" << std::endl;
    std::cout << "Values : x = " << x << ' ' << "y = " << y << std::endl;
    std::cout << x << "|" << y << " is " << (x | y) << std::endl;
}

void bitwiseAND() {
    std::bitset<4> x{ 0b0101 };
    std::bitset<4> y{ 0b0110 };
    std::cout << "\nBitwise AND" << std::endl;
    std::cout << "Values : x = " << x << ' ' << "y = " << y << std::endl;
    std::cout << x << "&" << y << " is " << (x & y) << std::endl;
}

void bitwiseXOR() {
    std::bitset<4> x{ 0b0101 };
    std::bitset<4> y{ 0b0110 };
    std::cout << "\nBitwise XOR" << std::endl;
    std::cout << "Values : x = " << x << ' ' << "y = " << y << std::endl;
    std::cout << x << "^" << y << " is " << (x ^ y) << std::endl;

}

void assignmentOperator() {
    std::cout << "\nAssignment Operators" << std::endl;
    std::uint8_t c{0b00001111};
    std::cout << std::bitset<32>(static_cast<std::uint8_t> (~c)) << std::endl;
    std::cout << std::bitset<32>(static_cast<std::uint8_t> (c << 6)) << std::endl;
    std::uint8_t cneg{static_cast<std::uint8_t>(~c) };
    c = static_cast<std::uint8_t>(~c);
}

int main()
{
    shiftLeft();
    shiftRight();
    bitwiseNot();
    bitwiseOR();
    bitwiseAND();
    bitwiseXOR();
    question2();
    question3();
    return 0;
}