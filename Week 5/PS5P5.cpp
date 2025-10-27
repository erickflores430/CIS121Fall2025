#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Define Variable
	double weight, rpp, total;

	cout << "Weight (Lbs): ";
	cin >> weight;

	//Process
	if (weight > 100) {
		rpp = .50;
	}
	else if (weight >= 30) {
		rpp = .25;
	}
	else if (weight >= 20) {
		rpp = .20;
	}
	else if (weight < 20) {
		rpp = .10;
	}
	total = weight * rpp;

	//Output
	cout << "Weight: " << weight << " lbs" << endl;
	cout << fixed << setprecision(2);
	cout << "Rate per pound: " << rpp << endl;
	cout << "Total: $" << total;
}