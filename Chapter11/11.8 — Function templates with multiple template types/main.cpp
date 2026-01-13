#include <iostream>
#include <cstdlib>

// static_cast
template <typename T>
T max(T x, T y) {
    return (x < y) ? y : x;
}

template <typename X, typename Y>
auto max(X x, Y y) {
    return (x < y) ? y : x;
}

// same as above
//auto max(auto x, auto y) {
//    return (x < y) ? y : x;
//}

int main()
{
    std::cout << max(static_cast<double>(2), 3.5) << std::endl;
    std::cout << max<double>(2, 3.5) << std::endl;
    std::cout << max(2, 3.5) << std::endl;

    return EXIT_SUCCESS;
}

