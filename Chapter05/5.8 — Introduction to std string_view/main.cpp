#include <string_view>
#include <iostream>
#include <string>

void printSV(std::string_view str) {
	std::cout << "Printing string view: " << str << std::endl;
}

void printString(std::string s) {
	std::cout << "Printing string: " << s << std::endl;
}


int main() {
	std::string_view sv{ "Hello, world!" };
	// printString(sv); // compile error: won't implicity converted std::string_view to a std::string
	std::string s{ sv };
	printString(s);
	printString(static_cast<std::string>(sv));
	
	return 0;
}