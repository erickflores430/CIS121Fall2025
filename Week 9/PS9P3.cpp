#include<iostream>
#include<iomanip>
using namespace std;
float compute_mpg(float miles, float gallon)
{
	float mpg;

	mpg = miles / gallon;

	return mpg;
}
float compute_gas_cost(float gallon)
{
	float gas_cost;

	gas_cost = gallon * 3.50f;

	return gas_cost;
}
int main()
{
	string city;
	float miles, gallons, mpg;
	float gas_cost;
	float sum_gas_cost = 0;

	cout << "Enter city name: ";
	
	while (cin >> city)
	{
		cout << "Enter miles travelled and gallons used: ";
		cin >> miles >> gallons;

		mpg = compute_mpg(miles, gallons);
		gas_cost = compute_gas_cost(gallons);
		sum_gas_cost = sum_gas_cost + gas_cost;

		cout << "Destination: " << city << endl
			<< "Miles per gallon: " << mpg << endl
			<< "Gas cost: " << gas_cost << endl
			<< "Enter city name (CTRL + Z if done): ";
	}
	cout << "Total gas expense: " << sum_gas_cost;
}