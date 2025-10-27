#include<iostream>
using namespace std;
int main()
{
	// Define Variable
	int n1;
	int n2;
	int sum;
	int prdct;
	int diff;

	// input phase
	cout << "Let's find the sum, difference, and product of two numbers!" << endl;
	cout << "Provide the first number: ";
	cin >> n1;
	cout << "Provide the second number: ";
	cin >> n2;

	// process phase
	sum = n1 + n2;
	cout << "Sum: " << sum << endl;
	diff = n1 - n2;
	cout << "Difference: " << diff << endl;
	prdct = n1 * n2;
	cout << "Product: " << prdct << endl;



}// end of main