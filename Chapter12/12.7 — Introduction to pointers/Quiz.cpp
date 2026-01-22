#include "Quiz.h"

int question1(){

	std::cout << "\nQuestion #1" << std::endl;
	short value{ 7 };
	short otherValue{ 3 };
	short* ptr{ &value };

	std::cout << "&value = " << &value << '\n'; // Address of value
	std::cout << "value  = " << value << '\n'; // value 7
	std::cout << "ptr    = " << ptr << '\n';  // Address ptr is pointing to
	std::cout << "*ptr   = " << *ptr << '\n'; // value of the address that ptr is pointing to 7
	std::cout << '\n';

	*ptr = 9;

	std::cout << "&value = " << &value << '\n'; // Address of value
	std::cout << "value  = " << value << '\n'; // value 9
	std::cout << "ptr    = " << ptr << '\n'; // Address ptr is pointing to
	std::cout << "*ptr   = " << *ptr << '\n'; // value of the address that ptr is pointing to 9
	std::cout << '\n';

	ptr = &otherValue;

	std::cout << "&otherValue  = " << &otherValue << '\n'; // Address of othervalue
	std::cout << "otherValue   = " << otherValue << '\n'; // othervalue 3
	std::cout << "ptr          = " << ptr << '\n'; // Address ptr is pointing to
	std::cout << "*ptr         = " << *ptr << '\n'; // value of the address that ptr is pointing to 3
	std::cout << '\n';

	std::cout << "sizeof(ptr)  = " << sizeof(ptr) << '\n';
	std::cout << "sizeof(*ptr) = " << sizeof(*ptr) << '\n';
	return EXIT_SUCCESS;
}