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
	}
	std::cin.get();
}