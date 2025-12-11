#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
float comp_mpg(float miles, float gallons)
{
	float mpg;

	mpg = miles / gallons;

	return mpg;
}
int main()
{
	ifstream infile;
	float gallons, miles, mpg;
	float mile_sum = 0, gallon_sum = 0;

	infile.open("Trips.txt");

	while (!infile.eof())
	{
		infile >> gallons >> miles;

		mpg = comp_mpg(miles, gallons);
		mile_sum = mile_sum + miles;
		gallon_sum = gallon_sum + gallons;

		cout << "Gallons used: " << gallons << endl
			<< "Miles travelled: " << miles << endl
			<< "Miles per gallon: " << mpg << endl << endl;

	}
	cout << "Total gallons used: " << gallon_sum << endl
		<< "Total miles travelled: " << mile_sum;
}