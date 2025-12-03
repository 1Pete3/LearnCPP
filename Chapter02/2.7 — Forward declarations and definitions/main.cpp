#include <iostream>

int main()
{
    int add(int x, int y);
    std::cout << add(2, 3) << std::endl;
    
}

int add(int x, int y) {
    return x + y;
}
