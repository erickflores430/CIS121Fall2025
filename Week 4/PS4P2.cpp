#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Define Variable
	string item;
	int price, extprice, quantity;

	//Input
	cout << "Choose between item 'A' or 'B': ";
	cin >> item;
	cout << "Enter quantity: ";
	cin >> quantity;

	//Process
	if (item == "A") {
		price = 10;
		extprice = quantity * price;
	} if (item == "B") {
		price = 20;
		extprice = quantity * price;
	}
	//Output
	cout << "Item " << item << endl;
	cout << "Price per unit: $" << price << endl;
	cout << "Extended price: $" << extprice << endl;
}
//end
