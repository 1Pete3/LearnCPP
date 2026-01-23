#include <iostream>
#include <cstdlib>

int main()
{
    int v{ 5 };
    int b{ 10 };
    int* ptr0{ &v };             // points to an "int" but is not const itself.  We can modify the value or the address.
    const int* ptr1{ &v };       // points to a "const int" but is not const itself.  We can only modify the address.
    int* const ptr2{ &v };       // points to an "int" and is const itself.   We can only modify the value.
    const int* const ptr3{ &v }; // points to a "const int" and is const itself.  We can't modify the value nor the address.

    // if the const is on the left side of the *, the const belongs to the value
    // if the const is on the right side of the *, the const belongs to the pointer

    *ptr0 = 7;
    std::cout << "*ptr0 = " << *ptr0 << std::endl;

    ptr1 = &b;
    std::cout << "*ptr1 = " << *ptr1 << std::endl;

    *ptr2 = 8;
    std::cout << "*ptr2 = " << *ptr2 << std::endl;

    // *ptr3 = 8; // Not Allowed
    // ptr3 = &b; // Not Allowed
    std::cout << "*ptr3 = " << *ptr3 << std::endl;

	
return EXIT_SUCCESS;
}
