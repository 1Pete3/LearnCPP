#include <iostream>
#include <cstdlib>
#include <string>

const std::string& getProgramName() {
    const std::string s_programName{ "Calculator" };
    return s_programName;
}


int main()
{
    std::cout << "This program is named " << getProgramName() << std::endl;
    return EXIT_SUCCESS;
}
