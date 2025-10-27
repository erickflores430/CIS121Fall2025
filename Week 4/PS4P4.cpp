#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Variable
	string name;
	double cost, warranty, rate, total;

	//Input
	cout << "Enter appliance type: ";
	cin >> name;
	cout << "Applliance price: ";
	cin >> cost;

	//Process
	if (cost > 1000.00) {
		rate = .10;
		warranty = cost * rate;
		total = cost + warranty;

	} if (cost <= 1000.00) {
		rate = .05;
		warranty = cost * rate;
		total = cost + warranty;
	}
	//Output
	cout << fixed << setprecision(2);
	cout << "Cost price of " << name
		<< " is $" << cost << endl;
	cout << "Warranty price: $" << warranty << endl;
	cout << "Total Cost: $" << total;

}//End of main