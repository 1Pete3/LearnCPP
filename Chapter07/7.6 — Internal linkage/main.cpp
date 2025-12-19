#include <iostream>
#include <cstdlib>

static int g_x{}; // Internal linkage via the static keyword
const int g_y{1}; // Const globals have internal linkage by default
constexpr int g_z{2}; // Constexpr globals have internal linkage by default


int main()
{
	std::cout << "g_x: " << g_x << "\ng_y: " << g_y << "\ng_z: " << g_z << std::endl;
	return EXIT_SUCCESS;
}

