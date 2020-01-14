#include<iostream>
int main() {
	const std::string str = "0123456789ABCDEF";
	std::string::size_type index = 0;
	std::string resault;
	while (std::cin >> index)
	{
		if (index < str.size()) {
			resault += str[index];
		}
		if (index >= str.size() ) {
			break;
		}
	}
	
	std::cout << resault << std::endl;
	std::cin.get();
}