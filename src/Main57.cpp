#include<iostream>

//#define NDEBUG
void print(std::string ia, size_t size = 0) {
#ifndef NDEBUG

	std::cerr << "Error:" << __FILE__
		<< ": in function " << __FUNCTION__ << std::endl
		<< " at line " << __LINE__ << std::endl

		<< "compiler on " << __DATE__
		<< " at " << __TIME__ << std::endl
		 << " print the word is " << ia 
			 << std::endl;
	size += 1;
#endif // !NDEBUG
	if(size == 0)
	std::cout << ia << std::endl;

}

int main() {
	print("david");
}