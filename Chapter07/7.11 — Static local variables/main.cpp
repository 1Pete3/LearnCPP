#include <cstdlib>
#include "generateID.h"


void automaticDuration() {
    int value{ 1 };
    ++value;
    std::cout << "Automatic Duration: " << value << std::endl;
} // value is destroyed here

void staticDuration() {
    static int s_value{1};
    ++s_value;
    std::cout << "Static duration: " << s_value << std::endl;
}

int main()
{
    automaticDuration();
    automaticDuration();
    staticDuration();
    staticDuration();
    staticDuration();
    generateID();
    generateID();
    return EXIT_SUCCESS;
}