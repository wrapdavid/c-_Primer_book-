#include<iostream>
#include<vector>
int main() {
	const int i[] = { 1, 2, 3 };
	std::vector<int> ivec (std::begin(i),std::end(i));
	for (auto a : ivec) {
		std::cout << a << " ";
	}std::cout << std::endl;
	

	std::cout << std::end(i) << std::endl;

	std::cout << "======================" << std::endl;

	std::vector<int> ivec0 = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	int arr[16];
	for (int a = 0; a != ivec0.size()  ; a++) {
		arr[a] = ivec0[a];
	}
	for (auto a : arr)
		std::cout << a << std::endl;

	std::cin.get();
}