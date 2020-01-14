#include<iostream>
#include<vector>

void Check_and_Print(const std::vector<std::string>& vec) 
{
	std::cout << "size: " << vec.size() << "  content: [";
	for (auto it = vec.begin(); it != vec.end(); it++)
	{
		std::cout << *it << (it != vec.end() - 1 ? ", " : "") ;
		
	}std::cout<< " ]" << std::endl;



}

void Check_and_Print(const std::vector<int>& vec)
{
	std::cout <<"size: "<< vec.size() << " content: [";
	for(auto it = vec.begin(); it != vec.end(); it++)
	{
		std::cout << *it << (it != vec.end() - 1? ", " : "");
	}std::cout << " ]" << std::endl;
}


int main() {
	
	std::vector<int> v1;
	std::vector<int> v2(10);
	std::vector<int> v3(10, 42);
	std::vector<int> v4{ 10 };
	std::vector<int> v5{ 10, 42 };
	std::vector<std::string> v6{ 10 };
	std::vector<std::string> v7{ 10, "hi" };

	Check_and_Print(v1);
	Check_and_Print(v2);
	Check_and_Print(v3);
	Check_and_Print(v4);
	Check_and_Print(v5);
	Check_and_Print(v6);
	Check_and_Print(v7);

	std::cin.get();
}
