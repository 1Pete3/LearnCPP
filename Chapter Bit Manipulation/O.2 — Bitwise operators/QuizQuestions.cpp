/*
A bitwise rotation is like a bitwise shift, except that any bits shifted off one end
are added back to the other end. For example 0b1001 << 1 would be 0b0010, but a left 
rotate by 1 would result in 0b0011 instead. Implement a function that does a left 
rotate on a std::bitset<4>. 
For this one, it’s okay to use test() and set().
*/
#include "QuizQuestions.h"

// "rotl" stands for "rotate left"
std::bitset<4> rotlQ2(std::bitset<4> bits)
{
	// Your code here
	if (bits.test(3) == 1) {
		bits <<= 1;
		bits.set(0);
	}
	else {
		bits <<= 1;
	}
	return bits;
}

std::bitset<4> rotlQ3(std::bitset<4> bits)
{
	return (bits << 1 | bits >> 3);
}

void question2()
{
	std::cout << "\nQuestion 2" << std::endl;
	std::bitset<4> bits1{ 0b0001 };
	std::cout << "Starting value: " << bits1 << std::endl;
	std::cout << "Value after shift: " << rotlQ2(bits1) << std::endl;

	std::bitset<4> bits2{ 0b1001 };
	std::cout << "Starting value: " << bits2 << std::endl;
	std::cout << "Value after shift: " << rotlQ2(bits2) << std::endl;
}

void question3() {
	std::cout << "\nQuestion 3" << std::endl;
	std::bitset<4> bits1{ 0b0001 };
	std::cout << "Starting value: " << bits1 << std::endl;
	std::cout << "Value after shift: " << rotlQ3(bits1) << std::endl;

	std::bitset<4> bits2{ 0b1001 };
	std::cout << "Starting value: " << bits2 << std::endl;
	std::cout << "Value after shift: " << rotlQ3(bits2) << std::endl;
}