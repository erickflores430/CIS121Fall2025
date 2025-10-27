#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Define Variable
	double lbs, ppp, total;

	//Input 
	cout << "Enter quantity (Lbs): ";
	cin >> lbs;

	//process
	if (lbs > 100) {
		ppp = .10;
	}
	else if (lbs >= 50) {
		ppp = .25;
	}
	else {
		ppp = .50;
	}
	total = lbs * ppp;

	//Output
	cout << fixed << setprecision(2);
	cout << "Price per pound: " << ppp << endl;
	cout << "Total: " << total;
}