#include <iostream>

template <typename T>

T max(T x, T y) {
    return (x < y) ? y : x;
}

template <typename P>
void printIDAndValue(P value) {
    static int id{ 0 };
    std::cout << ++id << ") " << value << std::endl;
}

int main()
{

    std::cout << max<int>(1,2) << std::endl;
    printIDAndValue(12);
    printIDAndValue(13);
    printIDAndValue(14.5);
    return EXIT_SUCCESS;
}
