#include <iostream>
#include <cstdlib>

void printCats(bool skip) {
    if (skip) {
        goto end;
    }
    std::cout << "cats\n";
end:
    ;
}

int main()
{
    std::cout << "printCats(true): " << std::endl;
    printCats(true);
    std::cout << "printCats(false): " << std::endl;
    printCats(false); // prints cats
    return EXIT_SUCCESS;
}

