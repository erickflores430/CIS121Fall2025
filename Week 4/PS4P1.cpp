#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Define Variable
	string item;
	int quantity;
	double unprice, extprice, tax, total;

	//Input phase
	cout << "Name of item: ";
	cin >> item;
	cout << "Enter quantity: ";
	cin >> quantity;

	//Process
	if (quantity >= 1000) {
		unprice = 3.00;
		extprice = quantity * unprice;
		tax = extprice * .07;
		total = extprice + tax;
	}
	else {
		unprice = 5.00;
		extprice = quantity * unprice;
		tax = extprice * .07;
		total = extprice + tax;
	}

	//Output phase
	cout << "Name of item: " << item << endl
		<< "Quantity " << quantity << endl
		<< "Price per unit: " << unprice << endl
		<< "Extended price: " << extprice << endl
		<< "Tax: " << tax << endl
		<< "Total: " << total;

}//End of line