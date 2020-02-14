#include<iostream>

int main() {
	std::string str, temp;
	while (std::cin >> str)
	{
		if (str == temp)break;
		else {
			temp = str;
			
		
		}
		
	}
	if (std::cin.eof()) std::cout << "no same word" << std::endl;
	std::cout << str << " occurs twice in succession. " << std::endl;
}