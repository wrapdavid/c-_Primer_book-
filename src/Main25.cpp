#include<iostream>
#include<vector>
#include<iterator>
int main() {
	const int size =10;
	int arr[size];
	for (int* i = arr; i != arr + size; i++) *i = 0;
	for (auto a: arr) {
		std::cout << a << std::endl;
	}
	//std::cout << *p << std::endl;
}