#include<iostream>
using namespace std;
int main()
{
	// define variable
	int n1;
	int n2;
	int n3;
	int result; 

	// Input phase
	cout << "Provide numbers to solve the following equation: (n1 + n2) * n3" << endl;
	cout << "Provide the first number (n1): ";
	cin >> n1;
	cout << "Provide second number (n2): ";
	cin >> n2;
	cout << "Provide third number (n3): ";
	cin >> n3;

	// process phase
	result = (n1 + n2) * n3;
	cout << "Total = " << result;


}// end of main