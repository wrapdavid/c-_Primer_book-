#include<iostream>
#include<vector>

int main() 
{
	std::vector<int> number = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (std::vector<int>::iterator it = number.begin(); it != number.end(); ++it)
	{
		*it *= 2;


	}
	for (auto a : number)
	{
		std::cout << a << std::endl;
	}

	std::cin.get();

}