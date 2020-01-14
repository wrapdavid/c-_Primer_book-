#include<iostream>
#include<vector>
#include<string>
int main() {
	std::vector<int> vec;
	int i;
	while (std::cin >> i) {

		vec.push_back(i);
	}
	for (auto it = vec.begin(); it != vec.end() - 1; ++it) {
		std::cout << *it + *(it + 1) << " ";
	}std::cout << std::endl;

	auto itb = vec.begin();
	auto ite = vec.end() - 1;
	for (auto it = vec.begin(); it != vec.end() - 1 && itb < ite; ++it) {
		std::cout << *itb + *ite << " ";
		itb++;
		ite--;
	}std::cout << std::endl;
	
	std::cin.get();
}