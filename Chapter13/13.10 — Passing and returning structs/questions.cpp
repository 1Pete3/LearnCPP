#include "questions.h"
#include <cassert>
#include <limits>

namespace question1 {
	void printAdRevenue(const AdRevenue& adrevenue) {
		std::cout << "Question #1" << std::endl;
		std::cout << "Ads watched: " << adrevenue.adsWatched << std::endl;
		std::cout << "Percent of ads clicked: " << adrevenue.adsClicked << std::endl;
		std::cout << "Ads earnings: " << adrevenue.adsEarnings << std::endl;
		std::cout << "Total Revenue: " << static_cast<double>(adrevenue.adsWatched)* adrevenue.adsEarnings * adrevenue.adsClicked << std::endl;
		std::cout << '\n';
	}
}

namespace question2 {

	Fraction getFraction()
	{
		Fraction temp{};
		std::cout << "Enter a value for numerator: ";
		std::cin >> temp.numerator;
		std::cout << "Enter a value for denominator: ";
		std::cin >> temp.denominator;
		std::cout << '\n';

		return temp;
	}

	constexpr Fraction multiply(const Fraction& f1, const Fraction& f2)
	{
		return { f1.numerator * f2.numerator, f1.denominator * f2.denominator };
	}

	void printFraction(const Fraction& f)
	{
		std::cout << f.numerator << '/' << f.denominator << '\n';
	}
}