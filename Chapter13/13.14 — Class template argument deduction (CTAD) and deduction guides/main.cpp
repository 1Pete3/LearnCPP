#include <iostream>
#include <utility>

template <typename T>
struct Pair {
    T first{};
    T second{};
};

template <typename T>
Pair(T, T) -> Pair<T>;

int main()
{
    std::pair<int, int>p1{ 1,2 };
    std::pair p2{ 1,2 }; // CTAD can deduce std::pair<int,int> from the initializers
    Pair<int> p3{ 1,2 };
    Pair p4{ 1,2 };
    return EXIT_SUCCESS;
}
