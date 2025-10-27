#include<iostream>
#include<iomanip>
using namespace std;
float comp_hourly(string code)
{
	float hourly = 0;

	if (code == "L") {
		hourly = 25;
	}
	else if (code == "A") {
		hourly = 30;
	}
	else if (code == "J") {
		hourly = 50;
	}
	return hourly;
}
int main()
{
	string name, code;
	float hours, ot_hours;
	float hourly_pay = 0, hourly_ot_pay;
	float entries = 0, pay_sum = 0;
	float pay, ot_pay, base_pay;

	cout << "Enter last name: ";

	while (cin >> name)
	{
		cout << "Enter Job code (L, A, or J) and hours worked: ";
		cin >> code >> hours;

		hourly_pay = comp_hourly(code);

		if (hours > 40) {
			ot_hours = hours - 40; //Over time equations
			hourly_ot_pay = hourly_pay * 1.5;
			ot_pay = ot_hours * hourly_ot_pay;

			base_pay = hourly_pay * 40; //Base pay (non OT)

			pay = base_pay + ot_pay; // Base + OT
		}
		else {
			pay = hourly_pay * hours;
		}

		pay_sum = pay_sum + pay;
		entries = entries + 1;

		cout << "Total pay for " << name << ": $" << pay << endl;
		cout << "Enter last name (CTRL + Z to stop): ";
	}
	float avg_pay = pay_sum / entries;

	cout << "Average payout: $" << avg_pay << endl
		<< "Entries entered: " << entries;
}