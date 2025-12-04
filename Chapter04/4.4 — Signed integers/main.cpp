#include <iostream>
#include <iomanip>

int intOverflow() {
    int x {2'147'483'647};
    std::cout << std::left;
    std::cout << std::setw(20) << "intOverflow()"  << x + 1 << std::endl;
    return 0;
}

int div() {
    std::cout << std::left;
    std::cout << std::setw(20) << "div()" << 8/5 << std::endl;
    return 0;
}

int main()
{
    std::cout << std::left;
    std::cout << std::setw(20) << "Function" << "Result" << std::endl;
    intOverflow();
    div();
}
