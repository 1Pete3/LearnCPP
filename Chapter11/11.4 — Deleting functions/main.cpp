#include <iostream>
#include <cstdlib>

void printInt(int x) {
    std::cout << x << std::endl;
}

// void printInt(char) = delete;
// void printInt(bool) = delete;

// Type must match printInt param using template
template <typename T>
void printInt(T x) = delete;

int main()
{
    printInt(97);
    printInt('a');
    printInt(true);
    printInt(5.0);

    return EXIT_SUCCESS;
}

