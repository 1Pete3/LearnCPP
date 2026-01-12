#include <iostream>
#include <cstdlib>

// Default argument y
int add(int x, int y = 10) {
    return x + y;
}

void print(int x);
void print(int x, int y = 10);
void print(int x, double y = 20.0);


int main()
{
    print(1, 2);
    print(1, 2.5);
   print(1); // Ambiguous function call
    std::cout << add(5) << std::endl;
    return EXIT_SUCCESS;
}

void print(int x) {
    std::cout << "print(int x) = " << x << std::endl;
}

void print(int x, double y) {
    std::cout << "print(int x, double y) = " << "x : " << x << " y : " << y << std::endl;
}

void print(int x, int y){
    std::cout << "print(int x, int y = 10) = " << "x : " << x << " y : " << y << std::endl;
}

