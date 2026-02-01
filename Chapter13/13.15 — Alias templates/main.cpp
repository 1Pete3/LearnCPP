#include <iostream>
#include <cstdlib>
template <typename T>
struct Pair {
    T first{};
    T second{};
};

template <typename T>
void print(const Pair<T>& p) {
    std::cout << p.first << ' ' << p.second << std::endl;
}

int main()
{
    using Point = Pair<int>;
    Point p{ 1,2 };
    print(p);
    return EXIT_SUCCESS;
}

