#include <iostream>
#include <cstdlib>
#include "Questions.h"


int main()
{
	const double towerHeight{ question1::getTowerHeight() };

	question1::calculateAndPrintBallHeight(towerHeight, 10);

	std::cout << "Question 2:" << std::endl;
    assert(!question2::isPrime(0));
    assert(!question2::isPrime(1));
    assert(question2::isPrime(2));
    assert(question2::isPrime(3));
    assert(!question2::isPrime(4));
    assert(question2::isPrime(5));
    assert(question2::isPrime(7));
    assert(!question2::isPrime(9));
    assert(question2::isPrime(11));
    assert(question2::isPrime(13));
    assert(!question2::isPrime(15));
    assert(!question2::isPrime(16));
    assert(question2::isPrime(17));
    assert(question2::isPrime(19));
    assert(question2::isPrime(97));
    assert(!question2::isPrime(99));
    assert(question2::isPrime(13417));

    std::cout << "Success!\n";


	return EXIT_SUCCESS;
}

