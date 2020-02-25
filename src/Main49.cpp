#include<iostream>
#include<fstream>


int compare(int* ptr, int i) {
	return (*ptr > i) ? *ptr : i;
}
int main() {
	std::ofstream send;
	send.open("youtube_file_handling");
	int i = 5;
	int i2 = 7;
	int* ptr = &i2;
	 send << compare(ptr, i);
	
	std::cin.get();

}