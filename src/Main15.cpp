#include<iostream>
int main() {
	std::string str = "Hello World";
	std::cout << str << "\n----------------------------" << std::endl;
	decltype(str.size()) index = 0;
	while (index < str.size())
	{
		str[index] = 'X';
			index++;

	}
	std::cout << str << std::endl;
	for (char &c : str) {
		c = 'X';
	}
	std::cout << str << std::endl;
	std::cin.get();

}