#include<iostream>
#include<vector>

int add(int i1, int i2) {
	return i1 + i2;
}
int sub(int i1, int i2) {
	return i1 - i2;
}
int multiply(int i1, int i2) {
	return i1 * i2;
}
int divid(int i1, int i2) {
	return i2 != 0? i1 / i2 : 0;
}
int main() {
	int a(int, int);//宣告function;
	std::vector<decltype(a)*> vec;//解釋這行
	vec.push_back(add);
	vec.push_back(sub);
	vec.push_back(multiply);
	vec.push_back(divid);
	for (auto i : vec) {
		std::cout << i(6,5) << ", ";
	}std::cout << std::endl;
	for (std::vector<int(*)(int, int)>::iterator b = vec.begin(); b != vec.end(); b++) {
		std::cout << (*b)(5, 2) << ", ";
	}std::cout << std::endl;
	std::cin.get();
}