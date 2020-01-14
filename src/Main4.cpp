#include<iostream>

int main() {
	int value1 = 0, value2 = 0;
	std::cout << "enter two number: " << std::endl;
	std::cin >> value1;
	std::cout << "enter another number: " << std::endl;
	std::cin >> value2;


	while (value2 >= value1) {
		std::cout << "value1 to value2 number show below: " << value2 << std::endl;
		--value2;
	}
	while (value2 <= value1) {
		std::cout << "value1 to value2 number show below: " << value1 << std::endl;
		--value1;
	}
	return 0;
}