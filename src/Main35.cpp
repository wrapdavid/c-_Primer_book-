#include<iostream>
#include<vector>
int main() {
	const std::vector<std::string> scores = {"F", "D", "C", "B", "A", "A++" };
	int grade = 50;
	std::string lettergrade;
	for (; std::cin >> grade && grade != 101;) {

	if (grade < 60)
	{
		lettergrade = scores[0];
	}
	else
	{
		lettergrade = scores[(grade - 50 )/ 10];
		if (grade != 100)
		{
			lettergrade += (grade % 10) > 7 ? "+" : grade % 10 < 3 ? "-" : "";
		}
	}
	std::cout << lettergrade << std::endl;
	}

	

}
