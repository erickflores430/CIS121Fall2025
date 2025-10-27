#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Variables
	double meal, total, tip;

	//input 
	cout << "Check Amount: ";
	cin >> meal;

	//process
	tip = meal * .15;
	total = meal + tip;

	//output
	cout << "Check amount: $" << meal << endl;
	cout << "Tip (15%): $" << tip << endl;
	cout << "Total: $" << total;

	return 0;
}//end of line