#include<iostream>
#include<vector>
#include<iterator>

bool compare(int* const pb0, int* const pe0, int* const pb1, int* const pe1) {
	if(pe0 - pb0 != pe1 - pb1)
	{
		return false;
	}
	else
	{
		for(int* i  = pb0 , *j = pb1; (i != pe0) && (j != pe1) ; ++i,++j)
			if (*i != *j) {
				return false;
			}

	}
	return true;
}
int main() {
	int array0[] = { 1, 2, 3 };
	int array1[] = { 1, 2, 3 };
	if (compare(std::begin(array0), std::end(array0), std::begin(array1), std::end(array1))) {
		std::cout << " the same array" << std::endl;
	}
	else {
		std::cout << "not the same array" << std::endl;
	}
	


	std::vector<int> vec1 = { 1, 2, 3 };
	std::vector<int> vec2 = { 1, 2, 4 };
	if (vec1 == vec2) {
		std::cout << " the same vector" << std::endl;
	}
	else
	{
		std::cout << "not the same vector" << std::endl;
	}
 }