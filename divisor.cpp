#include <iostream>
#include <math.h>

float num;
float divisor;
float result;

float divide(float num, float divisor){
	return num/divisor;
}

int main(){
	std::cout << "Enter number: ";
	std::cin >> num;
	std::cout << "Enter another number: ";
	std::cin >> divisor;
	result = divide(num, divisor);

	if (trunc(result)==result){
		std::cout << num << " is divisible by " << divisor << "\n";
		return 0;
	} else {
		std::cout << num << " isn't divisible by " << divisor << "\n";
		return 1;
	}
}	
