#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Define Variable
	string last, code;
	int hours;
	double rate, total;

	//Input
	cout << "Enter last name: ";
	cin >> last;
	cout << "Enter amount of hours worked: ";
	cin >> hours;
	cout << "Enter job code (E, J, or A): ";
	cin >> code;

	//process
	if (code == "E" or "e") {
		rate = 25.00;
	}
	else if (code == "J" or "j") {
		rate = 20.00;
	}
	else if (code == "A" or "a") {
		rate = 15.00;
	}
	total = hours * rate;

	//Output 
	cout << "Paystub for : " << last << endl;
	cout << "Hours worked: " << hours << endl;
	cout << fixed << setprecision(2);
	cout << "Pay rate: $" << rate << endl;
	cout << "Total payout: $" << total;
}