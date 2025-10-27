#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Variables
	double exam1, exam2, result1, result2, total;

	//input
	cout << "Enter 1st exam score: ";
	cin >> exam1;
	cout << "Enter 2nd exam score: ";
	cin >> exam2;

	//output
	result1 = (exam1 * .60) / 100.0;
	result2 = (exam2 * .40) / 100.0;
	total = result1 + result2;
	total = total * 100;

	cout << "Final Grade: " << total << "%";


}//end of main