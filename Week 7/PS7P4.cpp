#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	// Variable
	string last, code;
	double hours, entries = 0;
	double rate = 0, pay, pay_sum = 0;
	double average;
	double ot_time, ot_pay, ot_rate, non_ot_pay, non_ot_time; //Overtime variables
	// Input 
	std::cout << "Enter (1) last name, (2) job code (L, A, or J), and (3) hours worked: ";

	// Process
	while (cin >> last >> code >> hours) 
	{
		if (code == "L") {
			rate = 25.00;
		}
		else if (code == "A") {
			rate = 30.00;
		}
		else if (code == "J") {
			rate = 50.00;
		}

		if (hours > 40) {
			ot_time = hours - 40;
			ot_rate = rate * 1.5;
			ot_pay = ot_time * ot_rate;

			non_ot_time = hours - ot_time;
			non_ot_pay = non_ot_time * rate;

			pay = ot_pay + non_ot_pay;
		}
		else {
			pay = hours * rate;
		}
		pay_sum = pay_sum + pay;
		entries = entries + 1;



		std::cout << "Last name: " << last << endl
			<< "Job Code: " << code << endl
			<< "Hours worked: " << hours << endl
			<< "Rate Per hour: " << rate << endl
			<< "Total pay: $" << pay << endl
			<< "Enter (1) last name, (2) job code (L, A, or J), and (3) hours worked (Ctrl+Z to end): " << endl;
	}
	// Output
	average = pay_sum / entries;
	std::cout << "Average pay: $" << average << endl
		<< "Entries made: " << entries;
}
