
#include<iostream>

void print( int (&a)[4])
{
	int c[2];
	int i = 1;
	int* ii = &i;
	a[1] = 0;
	a[0] = 0;
	std::cin.get();
}

void print(int(*a)[4])
{
	int c[2];
	int i = 1;
	int* ii = &i;
	*a[1] = 0;
	*a[0] = 0;
	std::cin.get();
}

int main() {
	int ia[4] = { 2,3,5,4 };
	print(ia);
	print(&ia);
}