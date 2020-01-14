#include<iostream>
int main() {
	std::string str;
	std::string resault;
	while(std::cin >> str)
	{
		for (char c : str)
		{

		if (!ispunct(c)) {
			resault += c;
		}

		}

	}
	std::cout << resault << std::endl;
}