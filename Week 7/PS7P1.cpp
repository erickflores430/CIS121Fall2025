#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Variable
	double qty, price, ext_price, total;
	double discount, dis_price, dis_amount, total_dis = 0; /* Discount */

	// Input
	std::cout << "Enter quantity and price: ";

	// Process

	while (cin >> qty >> price)
	{
		ext_price = qty * price;

		if (qty > 1000) {
			discount = 0.10;
			dis_amount = ext_price * discount;
			dis_price = ext_price - dis_amount;
		}
		else {
			dis_amount = 0;
			dis_price = 0;
		}
		total_dis = total_dis + dis_price;

		std::cout << "Quantity: " << qty << endl
			<< "Price: $" << price << endl
			<< "Extended price: $" << ext_price << endl
			<< "Discounted amount: $" << dis_amount << endl
			<< "Discounted price: $" << dis_price << endl
			<< "Enter quantity and price: " << endl
			<< "or use (Ctrl + Z) to end" << endl;
	}
	std::cout << "Total of discounted prices: $" << total_dis;
}