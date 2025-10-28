#include<iostream>
#include<iomanip>
using namespace std;
void comp_total(float quantity, float price, float& total, float& tax, float& taxtotal)
{
	total = quantity * price;

	tax = total * .07f;

	taxtotal = total + tax;
}
int main()
{
	float quantity, price, total, tax, taxtotal;
	float order_sum = 0, tax_sum = 0;

	cout << "Enter quantity and price per item: ";

	while (cin >> quantity >> price)
	{
		comp_total(quantity, price, total, tax, taxtotal);

		order_sum = order_sum + total;
		tax_sum = tax_sum + tax;

		cout << "Total: $" << total << endl
			<< "Tax: $" << tax << endl
			<< "Total (with tax): $" << taxtotal << endl
			<< "Enter quantity and price per item (CTRL+ Z when done): ";
	}
	cout << "Order total: $" << order_sum << endl
		<< "Order Tax total: $" << tax_sum;
}