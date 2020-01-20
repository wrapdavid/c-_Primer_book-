#include<iostream>
int main() {

int arr[3][4] =
{
	{ 0, 1, 2, 3 },
	{ 4, 5, 6, 7 },
	{ 8, 9, 10, 11 }
};


for (int(*row)[4] = arr; row != arr + 3; row++) {
	for (int* col = *row; col != *row + 4; col++) {
		std::cout << *col << " ";
	}std::cout <<std::endl;
}
std::cout << "===============================" << std::endl;
for (int(&row)[4] : arr) {
	for (int col : row) std::cout << col << " ";
	std::cout << std::endl;
}
std::cout << "===============================" << std::endl;
for (size_t i = 0; i != 3; i++) {
	for (size_t j = 0; j != 4; j++) std::cout << arr[i][j] << " ";
	std::cout << std::endl;
}

std::cin.get();



}