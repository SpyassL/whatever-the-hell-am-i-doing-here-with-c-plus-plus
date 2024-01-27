#include <cmath>
#include <iostream>

float x, y, z;
char action;
char array[4] = {'+', '-', '*', '/'};
bool match = false;

void calc() {
	float result;
	
	switch (action) {
		case '+': {
			result = x+y+z;
			break;
		} case '-': {
			result = x-y-z;
			break;
		} case '*': {
			result = x*y*z;
			break;
		} case '/': {
			result = x/y/z;
			break;
		} case 's': {
			result = sqrt(x);
			break;
		} default: {
			std::cout << "How?!?!\n";
			break;
		}
	}
	std::cout << result << "\n";
}

int main() {
	std::cout << "Action (+,-,*,/,s):";
	std::cin >> action;
	
	std::cout << "WARNING! If you chose 's', values y, z will be ignored.\n";
	std::cout << "x:";
	std::cin >> x;
	std::cout << "y:";
	std::cin >> y;
	std::cout << "z:";
	std::cin >> z;
	
	calc();
	return 0;
}
