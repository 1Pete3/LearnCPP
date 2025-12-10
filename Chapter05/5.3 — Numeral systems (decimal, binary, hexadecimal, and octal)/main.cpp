#include <iostream>
// Libararies for printing binary
#include <bitset>
#include <format> // C++20


void octalExample() {
    int x{ 012 }; // 0 before the number means octal
    std::cout << "Octal 012 = " << x << std::endl;
}

void hexadecimalExample() {
    int y{0xF}; // 0x before the number means hexadecimal
    std::cout << "Hexadecimal 0xF = " << y << std::endl;
}

void binaryExample() {
    int bin{};        // Assume 16-bit int
    bin = 0b1;        // Assign binary 0000 0000 0000 0001 to the variable
    bin = 0b11;       // Assign binary 0000 0000 0000 0011 to the variable
    bin = 0b1010;     // Assign binary 0000 0000 0000 1010 to the variable
    bin = 0b11110000; // Assign binary 0000 0000 1111 0000 to the variable
    std::cout << "Binary 0b11110000 = " << bin << std::endl;
}

void digitSeparator() {
    int bin{0b1011'0010}; // 1011 0010
    long value{2'132'673'462}; // 2,132,673,462 easier to read 
}

void ioManipulators() {
    int x{12};
    std::cout << '\n';
    std::cout << "I/O Manipulators" << std::endl;
    std::cout << "Starting int val = " << x << std::endl;
    std::cout << "Hexadecimal = " << std::hex << x << std::endl;
    std::cout << "Decimal = " << std::dec << x << std::endl;
}

void outputBinary() {
    std::bitset<8> bin1{ 0b1100'0101 };
    std::cout << "Outputting Binary" << std::endl;
    std::cout << "197 in binary using bitset = " << bin1 << std::endl;
    std::cout << std::format("{:b}\n", 0b1010);  // C++20, {:b} formats the argument as binary digits
    std::cout << std::format("{:#b}\n", 0b1010); // C++20, {:#b} formats the argument as 0b-prefixed binary digits
}

int main()
{
    octalExample();
    hexadecimalExample();
    binaryExample();
    ioManipulators();
    outputBinary();
    return 0;
}