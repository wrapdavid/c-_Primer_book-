#include<iostream>
#include<vector>

int main() {
	int grade = 95;
	std::string finalgrade = (grade > 90) ? "high pass" : (grade > 75 ? "mid pass" : (grade > 60 ? "pass" : "no pass"));
	std::cout << finalgrade << std::endl;



	std::string s = "word";
	std::string pl = s + (s[s.size() - 1] == 's' ? "" : "s");
	std::cout << pl<< std::endl;
	std::cin.get();
}