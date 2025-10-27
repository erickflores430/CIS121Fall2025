#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Define Variable
	int quantity;
	double costpb, shipping, extprice, total;

	//Input
	cout << "Enter quantity of books: ";
	cin >> quantity;
	cout << "Enter cost per book: ";
	cin >> costpb;

	//Process
	extprice = quantity * costpb;
	if (extprice > 50.00) {
		shipping = 0;
		total = extprice;

	} if (extprice <= 50.00) {
		shipping = 25.00;
		total = extprice + shipping;
	}
	//Output 
	cout << "Order total: $" << extprice << endl
		<< "Shipping charge: $" << shipping << endl
		<< "Total: $" << total;
}
	//End of main