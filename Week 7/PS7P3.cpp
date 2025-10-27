#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	// Variable
	string destination;
	int trips = 0;
	double miles, mpg, gallons;
	double total_miles = 0;

	// Input
	cout << "Enter (1) location, (2) miles traveled, (3) gallons used (Ctrl + Z to end): ";

	// Process
	while (cin >> destination >> miles >> gallons)
	{
		mpg = miles / gallons;
		total_miles = total_miles + miles;
		trips = trips + 1;

		cout << "Destination: " << destination << endl
			<< "Miles per gallon: " << mpg << endl
			<< "Enter (1) location, (2) miles traveled, (3) gallons used (Ctrl + Z to end): ";
	}
	cout << "Total miles travelled: " << total_miles << endl
		<< "Total trips made: " << trips;
}