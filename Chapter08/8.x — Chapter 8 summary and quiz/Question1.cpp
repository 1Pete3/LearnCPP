// Gets tower height from user and returns it
#include "Questions.h"

double question1::getTowerHeight()
{
	std::cout << "Enter the height of the tower in meters: ";
	double towerHeight{};
	std::cin >> towerHeight;
	return towerHeight;
}

// Returns the current ball height after "seconds" seconds
double question1::calculateBallHeight(double towerHeight, int seconds)
{
	const double gravity{ 9.8 };

	// Using formula: s = (u * t) + (a * t^2) / 2
	// here u (initial velocity) = 0, so (u * t) = 0
	const double fallDistance{ gravity * (seconds * seconds) / 2.0 };
	const double ballHeight{ towerHeight - fallDistance };

	// If the ball would be under the ground, place it on the ground
	if (ballHeight < 0.0)
		return 0.0;

	return ballHeight;
}

// Prints ball height above ground
void question1::printBallHeight(double ballHeight, int seconds)
{
	if (ballHeight > 0.0)
		std::cout << "At " << seconds << " seconds, the ball is at height: " << ballHeight << " meters\n";
	else
		std::cout << "At " << seconds << " seconds, the ball is on the ground.\n";
}

// Calculates the current ball height and then prints it
// This is a helper function to make it easier to do this
void question1::calculateAndPrintBallHeight(double towerHeight, int seconds)
{
	/*const double ballHeight{ question1::calculateBallHeight(towerHeight, seconds) };
	question1::printBallHeight(ballHeight, seconds);*/
	for (int i{ 0 }; i <= seconds; ++i) {
		double ballHeight = question1::calculateBallHeight(towerHeight, i);
		if (ballHeight > 0.0){
			std::cout << "At " << i << " seconds, the ball is at height: " << ballHeight << " meters\n";
		}
		else {
			std::cout << "At " << i << " seconds, the ball is on the ground.\n";
			break;
		}

	}
}

