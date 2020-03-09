#include<iostream>
#include<vector>

//#define NDEBUG

void print(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end) {

#ifndef NDEBUG
	std::cout << "vector size is: " << end - begin << std::endl;
#endif // !NDEBUG
	//for (auto b = begin; b != end ; ++b) {
	//	if (begin != end) {
	//	std::cout << "the vector number is: " << *b << std::endl;
	//	}
	//}
	if (begin == end) {
		std::cout << "over" << std::endl;
		return;
	}

	std::cout << *begin <<" "  ;
	print(++begin, end);

}


int main() {
	std::vector<int> vec = { 1,2,3,4,5,6,7,8,9 };
	print(vec.begin(), vec.end());
}