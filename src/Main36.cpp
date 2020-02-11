#include<iostream>
#include<vector>
int main() {
	const std::vector<std::string> scores = { "F", "D", "C", "B", "A", "A++" };
	int grade = 50;
	while (std::cin >> grade && grade <= 100)
	{
		std::string lettergrade = grade < 60 ? scores[0] : scores[(grade - 50) / 10];
		lettergrade += (grade == 100 || grade < 60) ? "" : (grade % 10 > 7) ? "+" : (grade % 10 < 3) ? "-" : " ";
		std::cout << lettergrade << std::endl;
	}
	return 0;
}



