#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Define Variable
	string equipment, day;
	int cost = -1;

	//Input 
	cout << "Enter Equipment code (A, B, C or D): ";
	cin >> equipment;
	cout << "Half or full day ? (H or F): ";
	cin >> day;

	//Process
	if (equipment == "A") {
		if (day == "F")
			cost = 10;
		else if (day == "H")
			cost = 15;
	}
	else if (equipment == "B") {
		if (day == "F")
			cost = 20;
		else if (day == "H")
			cost = 35;
	}
	else if (equipment == "C") {
		if (day == "F")
			cost = 45;
		else if (day == "H")
			cost = 40;
	}
	else {
		cost = 50;
	}

	//Output
	cout << "Rental cost: $" << cost;
}