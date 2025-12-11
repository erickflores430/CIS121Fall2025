#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
float comp_extended(float quantity, float price)
{
	float extended;

	extended = price * quantity;

	return extended;
}
int main()
{
	ifstream infile;
	string item;
	float quantity, price, extended;
	float extended_sum = 0;

	infile.open("Grocery.txt");

	while (!infile.eof())
	{
		infile >> item >> quantity >> price;

		extended = comp_extended(quantity, price);
		extended_sum = extended_sum + extended;

		cout << fixed << setprecision(0);
		cout << "Item: " << item << endl
			<< "Quantity: " << quantity << endl;
		cout << fixed << setprecision(2);
		cout << "Price: $" << price << endl
			<< "Extended price: $" << extended << endl << endl;
	}
	float tax, total;

	tax = extended_sum * .07f;
	total = extended_sum + tax;

	cout << "Extended total: $" << extended_sum << endl
		<< "Tax: $" << tax << endl
		<< "Total: $" << total << endl;
}