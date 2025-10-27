#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Define Variable
	string status;
	double quantity, price, tax, extended, total;

	//Input
	cout << "Enter quantity: ";
	cin >> quantity;
	cout << "Enter status (A, B, C, or D): ";
	cin >> status;


	//Proccess
	if (quantity > 10000 && status == "A") {
		price = 10.0;
	}
	else if (quantity > 10000 && status == "B") {
		price = 12.0;
	}
	else if (quantity >= 5000 && quantity <= 10000 && status == "C") {
		price = 20.0;
	}
	else if (quantity >= 5000 && quantity <= 10000 && status == "D") {
		price = 22.0;
	}
	else {
		price = 30.0;
	}

	extended = quantity * price;
	tax = extended * 0.07;
	total = extended + tax;

	//Output
	cout << "Extended price: $" << extended << endl;
	cout << "Tax: $" << tax << endl;
	cout << "Total: " << total << endl;
}