#include <iostream>   
#include <sstream>
int main() {
	std::istringstream ist1;;
	float num;
	std::string string1 = "25 1 3.235\n1111111\n222222";
	ist1.str(string1);
	while (ist1 >> num)
	{
		std::cout << num << std::endl;
	}


	std::string string2 = "1 2 3 4 5 6 7 8 9 10";
	ist1.clear();
	ist1.str(string2);
	std::cout << "=============" << std::endl;
	std::cout << num << std::endl;
	while (ist1 >> num)
	{
		std::cout << num << std::endl;
	}
	//https://taichunmin.pixnet.net/blog/post/27827839   ¦r¦ê¦ê¬y±Ğ¾Ç
}