#include<iostream>

int main() {
	std::cout << "/*\n";
	std::cout << "*/\n";
	std::cout << /*"*/"*/\n";//加入一個double qutation
	std::cout << /* "*/"/*"/*"*/;
	std::cin.get();
}