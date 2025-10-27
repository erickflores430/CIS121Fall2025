#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//variable
	double buyprice, currentprice, outcome;
	string name;

	//input 
	cout << "Enter stock name: ";
	cin >> name;
	cout << "Enter stock buy price: ";
	cin >> buyprice;
	cout << "Enter current stock price: ";
	cin >> currentprice;

	//process
	// (v2 - v1) / v1 * 100
	outcome = (currentprice - buyprice) / buyprice * 100;
	if (outcome > .01) {
		cout << name << " increased by " << outcome << "%";
	} else {
		outcome = outcome * -1;
		cout << name << " decreased by " << outcome << "%";
	}

}// end of line