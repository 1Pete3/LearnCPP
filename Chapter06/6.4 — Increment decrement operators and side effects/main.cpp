#include <iostream>

void prefixIncrement(int x) {
    int y{ ++x };
    std::cout << "Prefix Increment: "  << "X: " << x << " " << "Y: " << y << std::endl;
}

void postfixIncremenet(int x) {
    int y{ x++ };
    std::cout  << "Postfix Increment: " << "X: " << x << " " << "Y: " << y << std::endl;
}


int main()
{
    prefixIncrement(5);
    postfixIncremenet(5);
    return 0;
}
