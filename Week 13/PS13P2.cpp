#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<vector>
using namespace std;

struct employee {
	string first;
	string last;
	float hours = 0;
	float rate = 0;
	float gross = 0;
};

float compute_gross(float hours, float rate) {
	if (hours <= 40)
		return hours * rate;
	else
		return (40 * rate) + ((hours - 40) * rate * 1.5);
}

int main()
{
	float n;

	cout << "Enter number of employees: ";
	cin >> n;

	vector<employee> employees(n);

	for (int i = 0; i < n; i++) {
		cout << "employee " << i + 1 << ": " << endl
			<< "Enter first name: ";
		cin >> employees[i].first;
		cout << "Enter last name:";
		cin >> employees[i].last;
		cout << "Enter hours worked: ";
		cin >> employees[i].hours;
		cout << "Enter rate per hour: $";
		cin >> employees[i].rate;
		employees[i].gross = compute_gross(employees[i].hours, employees[i].rate);

	}

	for (int i = 0; i < n; i++) {
		cout << endl
			<< "Employee name: " << employees[i].first << " " << employees[i].last << endl
			<< "Hours worked: " << employees[i].hours << endl
			<< "Rate per hour: $" << employees[i].rate << endl
			<< "Gross pay: $" << employees[i].gross << endl;
	}
}
