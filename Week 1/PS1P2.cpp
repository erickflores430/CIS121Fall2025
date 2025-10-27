#include<iostream>
using namespace std;
int main()
{
	// define variable 
	int fstnum;
	int secnum;
	int sum;

	// input phase
	cout << "Lets add two numbers" << endl;
	cout << "Enter first number: ";
	cin >> fstnum;
	cout << "Enter second number: ";
	cin >> secnum; 

	// process phase
	sum = fstnum + secnum;
	cout << "The sum is " << sum;

} // end of main