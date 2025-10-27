#include<iostream>
#include<iomanip>
using namespace std;
float compute_unit_price(string code)
{
	float unit_price = 0;
	if (code == "W") {
		unit_price = 10.00f;
	}
	else if (code == "C") {
		unit_price = 15.00f;
	}
	else if (code == "G") {
		unit_price = 20.00f;
	}
	return unit_price;
}
float compute_shipping_price(string code)
{
	float shipping = 0;
	if (code == "W") {
		shipping = 2.00f;
	}
	else if (code == "C") {
		shipping = 5.00f;
	}
	else if (code == "G") {
		shipping = 7.00f;
	}
	return shipping;
}
int main()
{
	string code;
	float quantity, unit_price = 0, extended_price, shipping = 0;
	float total, entry_total = 0, entries = 0;
	
	cout << "Enter product code (W, C, G) and quantity: ";

	while (cin >> code >> quantity)
	{
		unit_price = compute_unit_price(code);
		shipping = compute_shipping_price(code);


		extended_price = unit_price * quantity;
		total = extended_price + shipping;

		entry_total = entry_total + total;
		entries = entries + 1;

		cout << "Product code: " << code << endl
			<< "Unit price: $" << unit_price << endl
			<< "Shipping price: $" << shipping << endl
			<< "Extended price: $" << extended_price << endl
			<< "Total: $" << total << endl
			<< "Enter product code (W, C, G) and quantity (CTRL + Z if done): ";
	}
	cout << "entries entered: " << entries << endl
		<< "Sum of entries: $" << entry_total;
}