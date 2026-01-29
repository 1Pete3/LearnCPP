#include <iostream>
#include <cstdlib>

struct Something {
	int x;      // No initialization
	int y{};    // Value-initialized by default
	int z{ 2 }; // Explicit default value
};

int main()
{
	Something s1; // s1.x is unitialized, s1.y is 0, s1.z is 2
	Something s2{ 5,6,7 };
	Something s3{}; // s3.x is 0, s3.y is 0, s3.z 2 
	return EXIT_SUCCESS;

}

