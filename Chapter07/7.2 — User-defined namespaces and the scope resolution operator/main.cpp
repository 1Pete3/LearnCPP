#include <iostream>
#include "foo.h"
#include "goo.h"

int main()
{
  
    std::cout << Foo::doSomething(4, 3) << std::endl;
    std::cout << Goo::doSomething(4, 3) << std::endl;

    return 0;
}

