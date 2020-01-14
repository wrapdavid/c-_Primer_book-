#include<iostream>
#include<string>
struct Sale_data {
	std::string bookNo;
	unsigned unints_sold = 0;
	double revenue = 0;
};
int main() {
	Sale_data book1, book2; 
	double price1, price2;

	std::cin >> book1.bookNo >> book1.unints_sold >> price1;
	std::cin >> book2.bookNo >> book2.unints_sold >> price2;
	book1.revenue = book1.unints_sold * price1;
	book2.revenue = book2.unints_sold * price2;
	if (book1.bookNo == book2.bookNo) {
		unsigned totalBookCount = book1.unints_sold + book2.unints_sold;
		double totalRevenue = book1.revenue + book2.revenue;
		std::cout << book1.bookNo << ", " << totalBookCount << ", " << totalRevenue << std::endl;
		if (totalBookCount != 0) {
			std::cout << "平均一本售價: " <<totalRevenue / totalBookCount << std::endl;
		}
		else
		{
			std::cout << " no sales" << std::endl;
		}
	}
	else
	{
		std::cerr << "we should refer to same ISBN" << std::endl;
		return -1;
	}
	std::cin.get();
}