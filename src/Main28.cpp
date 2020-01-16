#include<iostream>
#include<cstring>
int main()
{
	const char c_cha1[] = "hello";
	const char c_cha2[] = " world!";
	
	char str3[200];
	 strcpy_s(str3, c_cha1);
	 strcat_s(str3, " ");
	 strcat_s(str3, c_cha2);
	 std::cout << str3 << std::endl;


	std::cin.get();
}