#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Define Variable
	string code;
	int volume, ppticket, total;

	//Input
	cout << "Enter number of tickets: ";
	cin >> volume;
	cout << "Enter location code (H or L): ";
	cin >> code;

	//Process
	if (volume > 25 || code == "H") {
		ppticket = 30;
	}
	else if (volume > 10 && volume < 24 || code == "L") {
		ppticket = 40;
	}
	else {
		ppticket = 50;
	}
	total = volume * ppticket;

	//Output 
	cout << "Number of tickets: " << volume << endl;
	cout << "Price per ticket: $" << ppticket << endl;
	cout << "Total: $" << total;
}