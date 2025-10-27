#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//variable
	double fixcost, ppunit, cpunit, bep;

	//input
	cout << "enter fixed cost: $";
	cin >> fixcost;
	cout << "price per unit: $";
	cin >> ppunit;
	cout << "cost per unit: $";
	cin >> cpunit;

	//process
	bep = fixcost / (ppunit - cpunit); 
	

	//output
	cout << "In order to reach your break even point, you must sell "
		<< round(bep)
		<< " units at $"
		<< ppunit;



}// end of main