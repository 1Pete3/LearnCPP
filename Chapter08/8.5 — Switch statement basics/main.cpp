#include <iostream>
#include <cstdlib>
#include <string>
 void printSwitch(std::string_view statement) {
	std::cout << statement << std::endl;
}

void usingSwitch(int x) {
	switch (x) {
	case 1:
		printSwitch("One");
		break;
	case 2:
		printSwitch("Two");
		break;
	case 3:
		printSwitch("Three");
		break;
	default:
		printSwitch("Unkown");
		break;
	}
}


int main() {
	usingSwitch(2);
	return EXIT_SUCCESS;
}