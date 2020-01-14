#include<iostream>

int main() {
	std::string str = "Hello World!!!";
	for (decltype(str.size()) index = 0;
		index != str.size() && !isspace(str[index]); index++) {
		str[index] = toupper(str[index]);
	}


	int n = -6;
	bool a = str.size() < n;
	std::cout << str << std::endl;
}