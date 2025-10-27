#include<iostream>
#include<iomanip>
using namespace std;
float compute_rate(string code)
{
	float rate = 0;

	if (code == "L") {
		rate = 25.0f;
	}
	else if (code == "A") {
		rate = 30.0f;
	}
	else if (code == "J") {
		rate = 50.0f;
	}
	return rate;
}
float compute_gross(float hours, float rate)
{
	float gross;
	float ot_rate, ot_hours, ot_gross;
	if (hours > 40) {
		ot_rate = rate * 1.5;
		ot_hours = hours - 40;
		ot_gross = ot_hours * ot_rate;
		gross = 40 * rate;
		gross = gross + ot_gross;
	}
	else {
		gross = hours * rate;
	}
	return gross;
}
int main()
{
	string code, name;
	float hours, rate, gross;
	float total_gross = 0;
	cout << "Enter Last name: ";

	while (cin >> name)
	{
		cout << "Enter job code (L, A, J) and hours worked: ";
		cin >> code >> hours;

		rate = compute_rate(code);
		gross = compute_gross(hours, rate);

		total_gross = total_gross + gross;

		cout << fixed << setprecision(2);
		cout << "Employee: " << name << endl
			<< "Gross pay: $" << gross << endl
			<< "Enter Last name (CTRL + Z if done): ";
	}
	cout << fixed << setprecision(2);
	cout << "Total gross pay for employees: $" << total_gross;
}