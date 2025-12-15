#include <iostream>
#include <string>
#include <string_view>

void printSV(std::string_view str) {
    std::cout << str << std::endl;
}

int main()
{
    printSV("Hello, World!");

    std::string s2{"Hello, World!"};
    printSV(s2);

    std::string_view s3{ s2 };
    printSV(s3);

    return 0;
}
