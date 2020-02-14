#include<iostream>
int main() {
	std::string str, temp;
	bool who = true;
	while (std::cin >> str) {
		if (str == temp && isupper(str[0]))
		{
			std::cout << "occurs twice in succession. " << std::endl;
			who = 0;
			break;
		}
		else
		{
			temp = str;

		}
	

	}
	if (who != 0)
	{
		std::cout << "no same word" << std::endl;
	}
}