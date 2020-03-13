#include<iostream>
#include<fstream>
struct Sale_data
{
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

};

int main() {
	Sale_data total;
	if (std::cin >> total.bookNo >> total.units_sold >> total.revenue) {
		Sale_data trans;
		while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue)
		{
			if (total.bookNo == trans.bookNo) {
				total.units_sold += trans.units_sold;
				total.revenue += trans.revenue;
			}
			else
			{
				std::cout << total.bookNo << " " << total.units_sold << " "
					<< total.revenue << std::endl;
				total = trans;

			}
		}
		std::cout << total.bookNo << " " << total.units_sold << " "
			<< total.revenue << std::endl;
	}
	else
	{
		std::cout << "no data?" << std::endl;
		return -1;
	}





}