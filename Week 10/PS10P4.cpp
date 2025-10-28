#include<iostream>
#include<iomanip>
using namespace std;
void comp_widget(float amount, float& cost, float& extended, float& tax, float& total)
{
	//Cost per widget
	if (amount >= 10000) {
		cost = 4.0f;
	}
	else if (amount >= 5000) {
		cost = 5.0f;
	}
	else {
		cost = 10.0f;
	}
	//Extended price
	extended = amount * cost;

	//Sales tax
	tax = extended * .07;

	//Total 
	total = extended + tax;
}
int main()
{
	float amount, cost, extended, tax, total;
	float total_sum = 0;

	cout << "Enter amount of widgets: ";

	while (cin >> amount)
	{
		comp_widget(amount, cost, extended, tax, total);
		total_sum = total_sum + total;

		cout << fixed << setprecision(2);
		cout << "# of widgets: " << amount << endl
			<< "Cost per widget: $" << cost << endl
			<< "Extended price: $" << extended << endl
			<< "Sales tax: $" << tax << endl
			<< "Total: $" << total << endl
			<< "Enter amount of widgets (CTRL+Z if done): ";
	}
	cout << "Total sum of orders: $" << total_sum;
}