#include<iostream>
#include<vector>
int main() {
	std::vector<std::string> str123 = { "how", "now", "now", "now", "brown", "cow", "cow" };
	size_t count = 0;
	std::pair<std::string, int> max_duplicated;

	for (std::string str, prestr; std::cin >> str; prestr = str)
	{
		if (prestr == str)
		{
			++count;
		}
		else
		{
			count = 0;
		}
	
		std::cout << "=======================" << std::endl;
		if (count > max_duplicated.second) max_duplicated = { prestr, count };
		std::cout << max_duplicated.second << std::endl;
	}

	if (max_duplicated.first.empty())std::cout << "There's no duplicated string." << std::endl;
	else
	{
		std::cout << "the word is: " << max_duplicated.first << " " << ", and the count " << max_duplicated.second + 1 << std::endl;
	}

	std::cin.get();
}