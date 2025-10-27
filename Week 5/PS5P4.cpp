#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Define Variable
	double salary, taxrate, tax;

	//Input
	cout << "Enter salery: $";
	cin >> salary;

	//Process
	if (salary > 100000) {
		taxrate = .40;
	}
	else if (salary >= 50000) {
		taxrate = .35;
	}
	else if (salary < 50000) {
		taxrate = .25;
	}
	tax = salary * taxrate;
	taxrate = taxrate * 100;

	//Output
	cout << "Salary: $" << salary << endl;
	cout << "Tax rate: " << taxrate << "%" << endl;
	cout << "Tax amount: $" << tax;
}