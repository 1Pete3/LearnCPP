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
	void ignoreLine() {
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	bool clearFailedExtraction() {
		if (!std::cin) {
			if (std::cin.eof()) {
				std::exit(0);
			}
			std::cin.clear();
			ignoreLine();
			return true;
		}
		return false;
	}


	void readFractions() {
		int numerator1{};
		int numerator2{};
		int denominator1{};
		int denominator2{};

		while (true) {
			std::cout << "Enter a value for the numerator: ";
			std::cin >> numerator1;
			if (clearFailedExtraction() || numerator1 == 0) {
				std::cout << "Oops, that input is invalid.  Please try again.\n";
				continue;
			}

			std::cout << "Enter a value for the denominator: ";
			std::cin >> denominator1;
			if (clearFailedExtraction() || denominator1 == 0) {
				std::cout << "Oops, that input is invalid.  Please try again.\n";
				continue;
			}

			std::cout << "Enter a value for the numerator: ";
			std::cin >> numerator2;
			if (clearFailedExtraction() || numerator2 == 0) {
				std::cout << "Oops, that input is invalid.  Please try again.\n";
				continue;
			}

			std::cout << "Enter a value for the denominator: ";
			std::cin >> denominator1;
			if (clearFailedExtraction() || denominator1 == 0) {
				std::cout << "Oops, that input is invalid.  Please try again.\n";
				continue;
			}


			ignoreLine();
			break;
		}

		std::cout << denominator1;
	}



}