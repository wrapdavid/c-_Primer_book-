#include<iostream>

int& get_val(int* array, int index)
{ 
	return array[index]; 
}
int main() {
	int a[10];
	for (int i = 0; sizeof(a) / sizeof(int); ++i)
	{
		get_val(a, i) = i + 10;
		std::cout << a[i] << " ";
	}std::cout << std::endl;
	std::cin.get();
}