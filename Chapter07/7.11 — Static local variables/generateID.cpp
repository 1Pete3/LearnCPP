#include <iostream>

int generateID() {
	static int s_itemID{0};
	std::cout << "ID is " << s_itemID << std::endl;
	return s_itemID++;
}