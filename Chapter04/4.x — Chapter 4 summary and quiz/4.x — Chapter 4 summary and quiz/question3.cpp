/*
Write a short program to simulate a ball being dropped off of a tower. To start, the user should be asked for the height of the tower in meters. Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity 
(the ball is not moving to start). Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds. The function can calculate how far the ball has fallen after x seconds using the 
following formula: distance fallen = gravity_constant * x_seconds2 / 2
*/

#include <iostream>

double fallen(int seconds, double height) {
	const double gravity{ 9.8 };
	return gravity * static_cast<double>(seconds * seconds) / 2;
}

void output() {
	double height{};
	std::cout << "Enter the height of the tower in meters: ";
	std::cin >> height;
	for (int i = 0; i < 6; i++) {
		if(height - fallen(i, height) > 0) {
			std::cout << "At " << i << " seconds, the ball is at height: " << height - fallen(i, height) << std::endl;
		}
		else {
			std::cout << "At " << i << " seconds, the ball is on the ground." << std::endl;
		}
		
	}
}