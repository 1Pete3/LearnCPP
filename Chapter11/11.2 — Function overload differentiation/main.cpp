#include <iostream>
#include <cstdlib>

int main()
{
    typedef int Height;// typedef
    using Age = int; // type alias

    void print(int value);
    void print(Age value); // not differentiated from print(int)
    void print(Height value); // not differentiated from print(int)

    return EXIT_SUCCESS;
}