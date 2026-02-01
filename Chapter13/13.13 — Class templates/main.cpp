#include <iostream>
#include <cstdlib>

template <typename T>

struct Pair {
    T first{};
    T second{};
};

template <typename T>
constexpr T max(Pair<T> p) {
    return (p.first < p.second ? p.second : p.first);
}

template <typename T, typename U>
struct TwoTypePair {
    T first{};
    U second{};
};

template <typename T, typename U>
void print(TwoTypePair<T, U> p) {
    std::cout << '[' << p.first << ", " << p.second << ']' << std::endl;
}


int main()
{
    Pair<int>p1{ 5,6 };
    std::cout << p1.first << ' ' << p1.second << std::endl;
    std::cout << max<int>(p1) << " is larger" << std::endl;
    Pair<double>p2{ 1.2,3.4 };
    std::cout << p2.first << ' ' << p2.second << std::endl;
    std::cout << max<double>(p2) << " is larger" << std::endl;
    Pair<double>p3{ 7.8,9.0 };
    std::cout << p3.first << ' ' << p3.second << std::endl;

    TwoTypePair<int, double>ttp1{ 1,2.3 };
    TwoTypePair<double, int>ttp2{ 4.5, 6 };
    TwoTypePair<int, int>ttp3{ 7,8 };
    print(ttp3);


    return EXIT_SUCCESS;
}

