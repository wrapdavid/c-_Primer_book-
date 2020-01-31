#include<iostream>
#include<vector>

int main() {
	std::vector<int> value = { 1, 3, 6, 5, 4, 8, 9, 11 };
	
	std::vector<int>::iterator end = value.end();
	std::vector<int> odd;
	for (std::vector<int>::iterator begin = value.begin(); begin != end; ++begin)
	{
		std::cout << ((*begin & 1) ? *begin * 2 : *begin) << " ";
		
	}std::cout << std::endl;
	for (auto i : value)
	{
		std::cout << ((i &1) ? i * 2 : i) << " ";

	}std::cout<<std::endl;
	std::cin.get();
}