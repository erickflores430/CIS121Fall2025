#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Define Variable
	string part;
	int quantity, cost, total;

	//Input 
	cout << "enter part # (10, 99, 55, 70, or 50): ";
	cin >> part;
	cout << "Enter quantity: ";
	cin >> quantity;

	//process
	if (part == "10" && quantity > 1000) {
		cost = 1;
	}
	else if (part == "99" && quantity > 500) {
		cost = 2;
	}
	else {
		cost = 5;
	}
	total = cost * quantity;

	//Output
	cout << "Part: " << part << endl;
	cout << "Cost per unit: $" << cost << endl;
	cout << "Total: $" << total;
}