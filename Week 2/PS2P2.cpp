#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	// Define Variables 
	string lstnme; 
	double hours;
	double rate;
	double gross;   
	
	//Input phase
	cout << "To find the total gross pay, start by providing your surname: ";
	cin >> lstnme;
	cout << "Please provide hours worked: ";
	cin >> hours;
	cout << "lastly, provide pay rate: ";
	cin >> rate;

	//Output phase
	gross = hours * rate;
	cout << "The total gross pay for " << lstnme << " is $" << gross;

	return 0;

	
}//End of main