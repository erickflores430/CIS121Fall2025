#include<iostream>
#include<iomanip>
using namespace std;
float compute_credit_charge(string code)
{
	float charge = 0;
	
	if (code == "I") {
		charge = 250.0f;
	}
	else if (code == "O") {
		charge = 550.0f;
	}

	return charge;
}
float compute_tuition(float credit, float credit_charge)
{
	float tuition;

	tuition = credit * credit_charge;

	return tuition; 
}
int main()
{
	string code, name;
	float hours, tuition, credit_charge, tuition_sum = 0;

	cout << "Enter Last name: ";
	
	while (cin >> name)
	{
		cout << "Enter credit hours registered: ";
		cin >> hours;
		cout << "Enter in (I) or out (O) of district: ";
		cin >> code;

		credit_charge = compute_credit_charge(code);
		tuition = compute_tuition(hours, credit_charge);
		tuition_sum = tuition_sum + tuition;

		cout << "Tuition cost for " << name << " : $" << tuition << endl
			<< "Enter Last name (CTRL + Z when done): ";
	}
	cout << "Sum of all tuition's registered: $" << tuition_sum;
}