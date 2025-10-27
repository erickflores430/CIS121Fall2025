#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Variabes
	double dscnt, prc, dprc, disc, total;
	string name;

	//input
	cout << "Name of item: ";
	cin >> name;
	cout << "Price of item: ";
	cin >> prc;
	cout << "Discount percent: ";
	cin >> dscnt ;

	//output
	disc = (prc * dscnt) / 100.0;
	total = prc - disc;
	
	cout << "total for " << name << " : $" << total;


}//end of main