
#include <iostream>

// Improved spyass Calculator

float num1, num2;
char action;

void takeAction() {
	switch (action) {
		case '+':
			std::cout << num1+num2<< std::endl;
			break;
		case '-':
			std::cout << num1-num2<< std::endl;
			break;
		case '*':
			std::cout << num1*num2<< std::endl;
			break;
		case '/':
			std::cout << num1/num2<< std::endl;
			break;
		default:
			std::cout << "Error: Invalid action." << std::endl;
			break;
	}
}

int main() {
	std::cout << "No.1:";
	std::cin >> num1;
	std::cout << "Action to take (+;-;*;/):";
	std::cin >> action;
	std::cout << "No.2:";
	std::cin >> num2;
	takeAction();
}
