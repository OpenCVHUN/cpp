#include <iostream>

int main() {
	float points;
	std::cout << "Enter your points and press any key!" << std::endl;
	std::cin >> points;
	if (points >= 35.0) {
		std::cout << "Excellent" << std::endl;
	}
	else if (points >= 30.0) {
		std::cout << "Good" << std::endl;
	}
	else if (points >= 25.0) {
		std::cout << "Average" << std::endl;
	}
	else if (points >= 20.0) {
		std::cout << "Passed" << std::endl;
	}
	else {
		std::cout << "Failed" << std::endl;
	}
	return 0;
}