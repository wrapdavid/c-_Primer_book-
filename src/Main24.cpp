#include<iostream>
#include<vector>
int main() {
	std::vector<unsigned> scores(11, 0);
	int grade;
	while (std::cin >> grade)
	{
		++*(scores.begin() + (grade / 10));

	}
	for (auto s : scores) {
		std::cout << s << " ";
	}std::cout << std::endl;

	std::cin.get();
}