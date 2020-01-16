#include<iostream>
#include<vector>

#include<string.h>
int main() {
	std::string str1 = "bbbb"; 
	std::string str2("bbbb");
	if (str1 == str2)
	{
		std::cout << "same str" << std::endl;
	}
	else if(str1 < str2)
	{
		std::cout << "str2 victory" << std::endl;
	}
	else
	{
		std::cout << "str1 victory" << std::endl;
	}

	std::cout << " ================== " << std::endl;
	

	const char cha1[] = "caaa";
	const char* cha2 = "bbbb" ;
	auto reault = strcmp(cha1, cha2);
	if (reault == 0)
	{
		std::cout << "same" << std::endl;
	}
	else if(reault < 0 )
	{
		std::cout << "cha2 victory" << std::endl;
	}
	else
	{
		std::cout << "cha1 victory" << std::endl;
	}
	
	std::cin.get();
}