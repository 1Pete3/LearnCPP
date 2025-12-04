#include <iostream>
#include <cstdint> // For fixed width integers

int fixed();
int charBehavior();
int fast();
int least();

int main()
{
    fixed();
    std::cout << '\n';
    charBehavior();
    std::cout << '\n';
    least();
    std::cout << '\n';
    fast();
    return 0;
}

int fixed() {
    std::int32_t fixed{ 32767 };
    std::cout << "fixed()" << std::endl;
    std::cout << "int32_t 32767 + 1 = " << fixed + 1 << std::endl;
    return 0;
}

int charBehavior() {
    std::cout << "charBehvaior()" << std::endl;
    std::int8_t x{ 65 };
    std::cout << "int8_t = 65 but we get " << x << std::endl;
    return 0;
}


int least()
{
    std::cout << "least()" << std::endl;
    std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
    std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
    std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
    return 0;
}

int fast() {
    std::cout << "fast()" << std::endl;
    std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
    std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
    std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";
    return 0;
}