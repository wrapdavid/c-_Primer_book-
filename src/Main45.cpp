#include<iostream>


int fun(int i) {
	return  i > 1 ? i * fun(i - 1) : 1;
}
void interactvie_f()
{
	std::string const prompt = "Enter a number within [1, 13] :\n";
	std::string const out_of_range = "Out of range, please try again.\n";

	for (int i; std::cout << prompt, std::cin>> i;)
	{
		if (i < 1 || i > 13)
		{
			std::cout << out_of_range;
			continue;
		}
		std::cout << fun(i) << std::endl;
	}
}

int main() {
	

	interactvie_f();
	return 0;

}