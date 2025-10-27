#include<iostream>
using namespace std;
int main()
{
	//define variable
	string lname;
	string fname;

	// input phase
	cout << "Enter first name: ";
	cin >> fname;
	cout << "Enter last name: ";
	cin >> lname;

	// process phase
	cout << "Hello " + lname; 

	return 0;

} // end of main