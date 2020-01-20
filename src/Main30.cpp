#include<iostream>
#include<vector>
int main() {

	constexpr size_t rowcnt = 3, colmcnt = 4;
	int arr[rowcnt][colmcnt];
	for (int i = 0; i != rowcnt; i++)
	{
		for (int j = 0; j != colmcnt; j++)
		{
			arr[i][j] = i * colmcnt + j;
			/*std::cout << arr[i][j] << " ";*/
		}
	}std::cout << std::endl;
	

	for (int (&row)[4] : arr)
	{
		for (int colm : row)
		{
			std::cout << colm << " ";
		}std::cout << std::endl;

	}	
	std::cout << "---------------------------------" << std::endl;

	size_t cnt = 0;
	int arr3[3][5][7] = { 0 };
	for (int(&row)[5][7] : arr3)
	{
		for (auto& colum : row)
		{
			for (auto end : colum)
			{
				end = cnt;
				cnt++;
				std::cout << end << " ";
			}
		}
	}std::cout << std::endl;

	std::cout << "======================================" << std::endl;
	int arr4[4][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
		{10,11,12}
	};

	for (int (&row)[3] : arr4) {
		for (int ar : row)
			std::cout << ar;
		std::cout << std::endl;
	}
	
	std::cout << "======================================" << std::endl;

	int	(*ra)[3] = arr4;
	std::cout << **ra << std::endl;
	ra = &arr4[2];
	std::cout << **ra << std::endl;
	std::cout << "======================================" << std::endl;
	using int_array = int[3];
	for (int (*p)[3] = arr4; ra != arr4 + 4; ra++) {
		for (int* p = *ra; p != *ra + 3; p++) {
			std::cout << *p << " ";
		} std::cout<< std::endl;
	}
	std::cout << "======================================" << std::endl;
	using int_array = int[3];
	for (int_array(*ra) = std::begin(arr4); ra != std::end(arr4); ra++) {
		for (int* p = std::begin(*ra); p != std::end(*ra); p++) {
			std::cout << *p << " ";
		}std::cout << std::endl;
	}

	std::cout << "======================================" << std::endl;
	using int_array = int*;
	typedef int int_one;
	int_one a = 1;
  	std::cin.get();
}