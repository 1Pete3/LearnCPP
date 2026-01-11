#include <iostream>
#include <cstdlib>
// User defined conversion to int
class X {

public :
    operator int() {
        return 0;
    }
};

void foo(int) {

}

void foo(double) {

}


int main()
{
    X x;
    foo(x); // x is converted to type int using the user-defined conversion from X to int
    return EXIT_SUCCESS;
}

