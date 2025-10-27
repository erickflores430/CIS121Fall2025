#include<iostream>
#include<iomanip>
using namespace std;
float comp_lab_fee(string department, float code)
{
	float lab_fee = 50.0f;
	if (department == "CIS") {
		if (code == 101) {
			lab_fee = 50.0f;
		}
		else if (code == 121) {
			lab_fee = 100.0f;
		}
	}
	else if (department == "MAT") {
		if (code == 111) {
			lab_fee = 25.0f;
		}
		else if (code == 112) {
			lab_fee = 35.0f;
		}
	}
	else if (department == "ENG") {
		if (code == 100) {
			lab_fee = 55.0f;
		}
	}
	else {
		lab_fee = 50.0f;
	}
	return lab_fee;
}
float compute_average(float total_fee, float entries)
{
	float average;

	average = total_fee / entries;

	return average;
}
int main()
{
	string department;
	float code;
	float lab_fee, total_fee = 0;
	float entries = 0;
	cout << "Enter course department (CIS, MAT, ENG, or other): ";

	while (cin >> department)
	{
		cout << "Enter course code (CIS: 101,121. MAT: 111, 112. ENG: 100): ";
		cin >> code;

		lab_fee = comp_lab_fee(department, code);
		entries = entries + 1;
		total_fee = total_fee + lab_fee;

		cout << "Lab fee for " << department << " " << code << ": $" << lab_fee << endl
			<< "Enter course department (CIS, MAT, ENG, or other): " << endl
			<< "If done (CTRL + Z)";

	}
	float average = compute_average(total_fee, entries);
	
	cout << "Total fees: $" << total_fee << endl
		<< "Average fee cost : $" << average;
}