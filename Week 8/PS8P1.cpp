#include<iostream>
#include<iomanip>
using namespace std;
float compute_mpg(float miles, float gallons)
{
	float mpg;

	mpg = miles / gallons;
	
	return mpg;
}
int main()
{
	float miles, mpg, gallons;
	string city;
	float total_miles = 0, total_trips = 0;

	cout << "Enter destination name (CTRL + Z to stop)";

	while (cin >> city)
	{
		cout << "Enter miles traveled and gallons used: ";
		cin >> miles >> gallons;
		
		mpg = compute_mpg(miles, gallons);

		total_miles = total_miles + miles;
		total_trips = total_trips + 1;

		cout << setprecision(2) << fixed;
		cout << city << "MPG: " << mpg << endl;
		cout << "Enter destination name (CTRL + Z to stop)";
	}
	cout << "total miles: " << setw(8) << total_miles << endl;
	cout << "Number if trips: " << setw(8) << total_trips << endl;

	return 0;
}