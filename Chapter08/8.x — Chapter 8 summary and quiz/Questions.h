#ifndef QUESTIONS_H
#define QUESTIONS_H
#undef NDEBUG

#include <cassert>
#include <iostream>

namespace question1 {
	double getTowerHeight();
	double calculateBallHeight(double towerHeight, int seconds);
	void printBallHeight(double ballHeight, int seconds);
	void calculateAndPrintBallHeight(double towerHeight, int seconds);
}

namespace question2 {
	bool isPrime(int x);
}
#endif