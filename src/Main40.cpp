#include<iostream>
#include<vector>

bool is_prefix(const std::vector<int>& lvalue, const std::vector<int>& rvalue)
{
	if (lvalue.size() > rvalue.size())
	{
		return is_prefix(rvalue, lvalue);
	}

	for (int init = 0; init != lvalue.size(); ++init)
	{
		if (lvalue[init] != rvalue[init]) {
			return false;
		}
	}
}



int main() {
	std::vector<int> rvalue = { 1, 2, 3, 4, 5 };
	std::vector<int> lvalue = { 1, 2, 3, 4, 5, 6, 7 };

	auto resault = is_prefix(lvalue, rvalue);



	std::cout << (resault ? "true" : "fault") << std::endl;
	std::cin.get();
}