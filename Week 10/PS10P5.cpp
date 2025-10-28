#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
void comp_investment(float amount, float five_year_rate, float ten_year_rate, float& five_year_return, float& ten_year_return)
{
	five_year_return = amount * pow(1 + five_year_rate, 5);
	ten_year_return = amount * pow(1 + ten_year_rate, 10);
}
int main()
{
	float amount, five_rate, ten_rate, five_return, ten_return;

	cout << "Enter investment amount: $";
	
	while (cin >> amount)
	{
		cout << "Enter investment rate for 5 years, and 10 years (Decimal only): ";
		cin >> five_rate >> ten_rate;

		comp_investment(amount, five_rate, ten_rate, five_return, ten_return);

		cout << fixed << setprecision(2);
		cout << "Five year return: $" << five_return << endl
			<< "Ten year return: $" << ten_return << endl
			<< "Enter investment amount (CTRL+Z when done): $";
	}
}