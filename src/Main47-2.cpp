#include"Chapter6.h"
#include<iostream>

int main() {
	std::cout << " 5! is: " << fact(5) << std::endl;
	std::cout << func() << std::endl;
	std::cout << abs(-9.78) << std::endl;
	unsigned int x = 4294967295  ;
	unsigned& xx = x;
	xx += 66;
	std::cout << (char)x << std::endl;
	std::cin.get();
}