#include<iostream>



void print(const int& i) {
	std::cout << i << std::endl;
}
void print(const int(&arr)[2] ) {	//void print(const int* i) {
									//	std::cout << *i << std::endl;
	for (int a : arr) {
		std::cout << a << " ";
	}std::cout << std::endl;
}
void print( const int(*arr)[2]) {
	for (const int* a = std::begin(*arr); a != std::end(*arr); a++) {
		std::cout << *a << " ";

	}std::cout << std::endl;
}
void print(const int ia[], size_t size) {

	for (int i = 0; i != size; i++) {
		std::cout << ia[i] << " ";
	}std::cout << std::endl;

}
int main() {
	int i = 0;
	int j[2] = { 2, 3 };
	print(i);//const int& i 
	print(j);
	print(&j);//const int(*arr)[2]
	print(j, sizeof(j) / sizeof(int));
	
}