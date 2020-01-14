#include<iostream>

int main() {
	std::cout << "Enter two numbers: ";
	int v1 = 0, v2 = 0;
	std::cin >> v1 ;
	std::cout << "Enter another one: ";
	std::cin >> v2;
	std::cout << "v1 = " << v1 << " and " << "v2 = " << v2 << " and v1 + v2 = " << v1 + v2 
		<< std::endl;
	return 0;
}