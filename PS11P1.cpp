#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
float comp_savings(float msrp, float sales_price)
{
	float savings;

	savings = msrp - sales_price;

	return savings;
}
float comp_tax(float sales_price)
{
	float tax;

	tax = sales_price * 0.07f;

	return tax;
}
int main()
{
	string make, model;
	float msrp, sales_price, savings, tax;
	float savings_sum = 0;
	ifstream infile;

	infile.open("Auto.txt");

	while (!infile.eof())
	{
		infile >> make >> model >> msrp >> sales_price;

		savings = comp_savings(msrp, sales_price);

		tax = comp_tax(sales_price);

		savings_sum = savings_sum + savings;

		cout << fixed << setprecision(2);
		cout << "Make: " << make << endl
			<< "Model: " << model << endl
			<< "MSRP: $" << msrp << endl
			<< "Sales price: $" << sales_price << endl
			<< "Savings: $" << savings << endl
			<< "Tax: $" << tax << endl << endl;
	}
	cout << "Total savings: " << savings_sum;
}