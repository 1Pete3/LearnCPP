#include <iostream>
#include <cstdlib>
#include <cinttypes>

void whileLoop() {
	int count{1};
	while (count <= 10) {
		std::cout << "While loop still executing : " << count << std::endl;
		++count;
	}
	std::cout << "While loop done!" << std::endl;
}

void question2() {
	std::cout << "Question 2" << std::endl;
	char letter{'a'};
	while (letter <= 'z') {
		std::cout << "Letter: " << letter << " ASCII: " << static_cast<int>(letter) << std::endl;
		++letter;
	}
}

void question3() {
	std::cout << "Question 3" << std::endl;
	int outer{ 5 };
	while (outer >= 1) {
		int inner{ outer };
		//std::cout << "Outer: " << outer << std::endl;
		while (inner >= 1) {
			std::cout << inner-- << ' ';
		}
		std::cout << '\n';
		--outer;
	}
}

void question4() {
	int outer{ 1 };
	std::cout << "Question 4" << std::endl;
	while (outer <= 5) {
		int inner{ 5 };
		while (inner >= 1) {
			if (inner <= outer) {
				std::cout << inner << ' ';
			}
			else {
				std::cout << "  ";
			}
			--inner;
		}
		std::cout << '\n';
		++outer;
	}
}


int main(){
	question2();
	question3();
	question4();
	return EXIT_SUCCESS;
}