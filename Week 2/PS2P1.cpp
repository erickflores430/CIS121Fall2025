#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Define Variable 
	int quantity;
	double uniprc, extdprc;

	//Input phase
	cout << "To find the extended price of an item, enter # of items: ";
	cin >> quantity; 
	cout << "Now enter the price of a single unit: ";
	cin >> uniprc;

	//Process phase
	extdprc = quantity * uniprc;
	cout << "Total extended price is $" << extdprc << setprecision(2);

	return 0;
	
} // end of main