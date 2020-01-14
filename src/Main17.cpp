#include<iostream>
#include<vector>
int main() {
	std::vector<int> v2 = {42, 65, 95, 100, 39, 67, 95, 76, 88, 76, 83, 92, 76, 93};
	decltype(v2.size()) grade = 0;
	std::vector<int> scores(11, 0);
	
	for (int c : v2) {
		grade = c;
		while (c == grade)
		{

			if (grade <= 100) {
				 ++scores[grade / 10];
			}
		
			c = 0;
		}
	}
		
				for (int a : scores) {
					std::cout << a << " ";
				}
			
	
	
	std::cin.get();
}