#include <iostream>
#include <cstdlib>
#include <string>
#include <cassert>


void printByValue(std::string val) {
	std::cout << "By value     : " << val << std::endl;
}

void printByReference(const std::string& ref) {
	std::cout << "By reference : " << ref << std::endl;
}

void printByAddress(const std::string* ptr) {
	std::cout << "By address   : " << *ptr << std::endl;
}

void print(const int* ptr) {
	assert(ptr);
	if (!ptr) {
		return;
	}
	std::cout << "print        : " << *ptr << std::endl;
}

int main()
{
	std::string str{ "Hello World!" };
	printByValue(str);
	printByReference(str);
	printByAddress(&str);

	std::string* ptr{ &str };
	printByAddress(ptr);
	
	int x{ 5 };
	print(&x);
	print(nullptr);
	
   return EXIT_SUCCESS;
}

