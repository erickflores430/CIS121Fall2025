#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Variables
	string lname;
	double credits, tuition, lab;

	//input 
	cout << "Welcome, please state your surname: ";
	cin >> lname;
	cout << "Hello, " << lname << endl;
	cout << "To find total Tuition cost, please enter how many hour credit's you'll be taking: ";
	cin >> credits;

	//output
	lab = 100;
	tuition = 250 * credits + lab;

	cout << "Total tuition cost for " << lname
		<< " is: $"
		<< tuition;
	

}//end of main