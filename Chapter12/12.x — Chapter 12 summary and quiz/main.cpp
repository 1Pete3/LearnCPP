#include <iostream>
#include <cstdlib>
// x - smaller value
// y - larger value
void sort2(int& x, int& y) {
	if(x > y){
		std::swap(x, y);
	}
	
}

int main()
{
	int x{7};
	int y{5};
	
	std::cout << x << ' ' << y << std::endl; // should print 7 5
	
	sort2(x, y);
	std::cout << x << ' ' << y << std::endl; // should print 5 7

	sort2(x, y);
	std::cout << x << ' ' << y << std::endl; // should print 5 7

	return EXIT_SUCCESS;
}

