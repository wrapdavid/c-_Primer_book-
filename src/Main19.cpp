#include<iostream>
#include<vector>
int main() {
	std::vector<int> str;
	std::vector<int> str1;
	decltype(str.size()) word = 0;
	while (std::cin >> word) {
		str.push_back(word);
		for (int i = 0; i < str.size() - 1; i++) {
			word = str[i] + str[i + 1];
			std::cout << word << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "------------------------- " << std::endl;

	int m = 0;
	int n = str.size() - 1;
	while (m < n) {
		std::cout << str[m] + str[n] << std::endl;
		m++;
		n--;
	}
}