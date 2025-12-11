#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
float comp_biweekly(float annual)
{
	float bi;

	bi = annual / 26;

	return bi;
}
int main()
{
	ifstream infile;
	string name;
	float annual, biweekly;
	float sum_annual = 0, employees = 0;

	infile.open("Empl.txt");

	while (!infile.eof())
	{
		infile >> name >> annual;

		biweekly = comp_biweekly(annual);

		sum_annual = sum_annual + annual;
		employees = employees + 1;

		cout << "Name: " << name << endl
			<< "Annual salary: $" << annual << endl
			<< "Bi-weekly pay: $" << biweekly << endl << endl;
	}
	float average = sum_annual / employees;

	cout << "Annual salary sum: $" << sum_annual << endl
		<< "Employee count: " << employees << endl
		<< "Average salary: $" << average;
}