#include<iostream>
std::string who_long(const std::string& str1, const std::string& str2) {
	return (str1.size() <= str2.size() ? str1 : str2);
}


int main() {
	std::string str1, str2, str3;
	//do {
	//	std::cout << "give me two word to compare long size:" << std::endl;
	//	std::cin >> str1 >> str2;

	//	std::cout << (str1.size() <= str2.size() ? str1 : str2) << " is less than the other. " << std::endl << "more ? Enter yes or no ";
	//	std::cin >> str3;


	//} while (!str3.empty() && str3[0] != 'n');//while (tolower(rsp[0]) == 'y');

	
	do {
		std::cout << "give me two word to compare long size:" << std::endl;
		std::cin >> str1 >> str2;

		std::cout << who_long(str1, str2)  << " is less than the other." << std::endl << "more ? Enter yes or no ";
		
		std::cin >> str3;


	 
	} while (!str3.empty() && str3[0] != 'n');//while (tolower(rsp[0]) == 'y');

}