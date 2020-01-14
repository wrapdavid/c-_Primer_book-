#include<iostream>
#include<string>

#include"exercise2_42.h"


int main() {
	Sale_data total;

	if (std::cin >> total.bookNo >> total.unit_sold >> total.price)
	{
		total.revenue = total.unit_sold * total.price;
		Sale_data transfer;
		while (std::cin >> transfer.bookNo >> transfer.unit_sold >> transfer.price)
		{
			transfer.revenue = transfer.unit_sold * transfer.price;
			if (total.bookNo == transfer.bookNo)
			{
				total.unit_sold += transfer.unit_sold;
				total.revenue += transfer.revenue;
			}
			else
			{
				std::cout << total.bookNo << ", " << total.unit_sold << ", " << total.revenue << std::endl;
				if (total.unit_sold != 0)
				{
					std::cout << "¥­§¡­È: " << total.revenue / total.unit_sold << std::endl;
				}
				else
				{
					std::cout << "no sales" << std::endl;
				}
				total.bookNo = transfer.bookNo;
				total.price = transfer.price;
				total.unit_sold = transfer.unit_sold;
				total.revenue = transfer.revenue;
			}
		}
		std::cout << total.bookNo << ", " << total.unit_sold << ", " << total.revenue << std::endl;
		if (total.unit_sold != 0)
		{
			std::cout << "¥­§¡­È: " << total.revenue / total.unit_sold << std::endl;
		}
		else
		{
			std::cout << "no sales" << std::endl;
		}
		return 0;
	}
	else
	{
		std::cerr << "no data?" << std::endl;
		return -1;
	}

}