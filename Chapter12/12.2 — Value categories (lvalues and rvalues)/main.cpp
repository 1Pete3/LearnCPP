#include <iostream>
#include <cstdlib>
#include <string>

template <typename T>
constexpr bool is_lvalue(T&) {
    return true;
}

template <typename T>
constexpr bool  is_lvalue(T&&) {
    return false;
}

#define PRINTVCAT(expr) { std::cout << #expr << " is an " << (is_lvalue(expr) ? "lvalue\n" : "rvalue\n"); }
int getint(){ 
    return 5;
};

int main()
{
    PRINTVCAT(5);
    PRINTVCAT(getint());
    int x{ 5 };
    PRINTVCAT(x);
    PRINTVCAT(std::string{ "Hello" });
    PRINTVCAT("Hello");
    PRINTVCAT(++x);
    PRINTVCAT(x++);
    return EXIT_SUCCESS;
}

