#include "Questions.h"

bool question2::isPrime(int x)
{
    if (x <= 1) {
        return false;
    }
    for (int test{ 2 }; test < x; ++test) {
        if (x % test == 0) {
            return false;
        }
    }
    return true;
}