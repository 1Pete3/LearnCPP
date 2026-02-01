#ifndef QUESTIONS_H
#define QUESTIONS_H
#include <iostream>
#include <cstdlib>

namespace question1 {
	struct AdRevenue {
		int adsWatched{};
		double adsClicked{};
		double adsEarnings{};
	};
	void printAdRevenue(const AdRevenue& adrevenue);
};

namespace question2 {
	struct Fraction {
		int numerator{};
		int denominator{ 1 };
	};

	Fraction getFraction();
	constexpr Fraction multiply(const Fraction& f1, const Fraction& f2);
	void printFraction(const Fraction& f);
}

#endif