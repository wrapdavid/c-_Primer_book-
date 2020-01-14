#include<iostream>

int main() {

	int BaseToSum = 50, next_base_value = 51;

	while (next_base_value <= 100) {
		BaseToSum += next_base_value;
		++next_base_value;
	}
	std::cout << BaseToSum << std::endl;

}