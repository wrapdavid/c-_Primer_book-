#include<iostream>


int main() {

	int sum = 0, value = 0;
	while (std::cin >> value) {
		if (value == 0)
			break;
		sum += value;
		
	}
	std::cout << "sum is:¡@" <<  sum << std::endl;
	return 0; 
}