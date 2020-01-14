#include<iostream>
#include<vector>
int main() {
	std::vector<std::string> str;
	str.push_back("aaaaaaaaaaaaaaaaa");
	str.push_back("");
	str.push_back("bbbbbbbbbbbbbbbbbb");

	for (std::vector<std::string>::iterator it = str.begin(); it != str.end() && !(*it).empty() ; it++)
	{
		for (auto& a : *it) {
			a = toupper(a);
		}


	}for (auto& a : str) {

	std::cout << a << std::endl;
	}
	std::cin.get();
}