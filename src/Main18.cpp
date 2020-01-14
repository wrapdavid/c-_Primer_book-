#include<iostream>
#include<vector>
int main() {
	std::string word;
	std::vector<std::string> str;
	while (std::cin >> word) {
		for (auto& a : word) {
			a = toupper(a);
		}
		str.push_back(word);
		for (auto w : str) {
			std::cout << w << " ";
		}
	}
	
	std::cin.get();
}