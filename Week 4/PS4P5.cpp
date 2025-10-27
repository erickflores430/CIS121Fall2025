#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Variable
	string last;
	int dependents;
	double gross, adgross, incometax, taxrate;

	//Input 
	cout << "Enter last name: ";
	cin >> last;
	cout << "Enter gross income: ";
	cin >> gross;
	cout << "Enter nuumber of dependents: ";
	cin >> dependents;

	//Process
	adgross = gross - (dependents * 12000);
	if (adgross > 50000.00) {
		taxrate = .20;
		incometax = adgross * taxrate;
	}
	else {
		taxrate = .10;
		incometax = adgross * taxrate;
	}
	if (incometax < 0) {
		incometax = 100;
	}
	//Output
	cout << fixed << setprecision(2);
	cout << "Tax details for " << last << endl;
	cout << "Gross income: $" << gross << endl;
	cout << "Number of dependents: " << dependents << endl;
	cout << "Adjusted gross income: $" << adgross << endl;
	cout << "Income tax: $" << incometax;
}
//End 