#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Variables
	double price, quantity, value;
	string name;

	//Input
	cout << "Name of stock: ";
	cin >> name;
	cout << "Stock Price: ";
	cin >> price;
	cout << "Stock Quantity: ";
	cin >> quantity;

	//process
	value = price * quantity;

	//Output 
	cout << "Total value of "
		<< name
		<< " is $"
		<< value;

}// end of main