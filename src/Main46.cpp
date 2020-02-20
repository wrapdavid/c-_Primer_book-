#include<iostream>


struct Vector3 {
	int x = 50, y = 51, z =53;
};
int main() {

	Vector3 e0;
	Vector3* e = &e0;
	int a = (int) (((Vector3*)e)->y);
	std::cout << a << std::endl;

	int b = (int)&((Vector3*)0)->y;
	std::cout << b << std::endl;




	int       i = 1;
	int*  iptr1 = &i;
	int** iptr2 = &iptr1;



	int ptr0[2] = { 1, 2 };
	int ptr1[2] = { 3, 4 };
	int ptr2[2] = { 5, 6 };

	//int** a = &iptr1;
	int* aaaa[3] = { ptr0, ptr1, ptr2 };
	std::cin.get();
}