#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Define Variable
	string code;
	int hours, rate  = -1, gross;

	cout << "Enter job Code (L, J or A): ";
	cin >> code;
	cout << "Enter hours worked: ";
	cin >> hours;

	//Process
	if (code == "L") {
		if (hours > 40)
			rate = 50;
		else if (hours <= 40)
			rate = 40;
	}
	else if (code == "J") {
		if (hours > 60)
			rate = 100;
		else if (hours <= 60)
			rate = 75;
	}
	else if (code == "A") {
		if (hours > 40)
			rate = 25;
		else if (hours <= 40)
			rate = 20;
	}
	gross = hours * rate;

	//Output
	cout << "Gross salary: $" << gross << endl;
}