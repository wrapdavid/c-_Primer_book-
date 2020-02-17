#include<iostream>

int main() {
	int i = 0, j; 
	
	
	while (std::cin >> i >> j)
	{
		try
		{
			if (j == 0)
				{
					throw std::runtime_error("divisor is 0 ");
				}
			std::cout << i / j << std::endl;
		}
		catch (std::runtime_error err)
		{
			const int ii{*err.what()};//d
			std::cout << err.what() << "\n try again ? enter yes or no " << std::endl;
			char c;
			std::cin >> c;
			if (c == 'n')
			{
				break;
			}
		}
	}

}
