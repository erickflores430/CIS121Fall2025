#include<iostream>
#include<iomanip>
using namespace std;
void comp_postage(float weight, float zipcode, float& areacharge, float& weightcharge, float& postage)
{
	float charge_per_ounce;
	//Zip code charge 
	if (zipcode == 60171) {
		areacharge = 2.0f;
	}
	else if (zipcode == 60172) {
		areacharge = 2.5f;
	}
	else if (zipcode == 60635) {
		areacharge = 3.0f;
	}
	else {
		areacharge = 5.0f;
	}

	//Weight charge
	if (weight > 100) {
		charge_per_ounce = 0.02f;
	}
	else if (weight > 50) {
		charge_per_ounce = 0.03f;
	}
	else {
		charge_per_ounce = 0.05f;
	}
	weightcharge = weight * charge_per_ounce;

	//Total
	postage = weightcharge + areacharge;
}
int main()
{
	float zipcode, weight, areacharge, weightcharge, postage;
	float entries = 0;

	cout << "Enter weight of package (oz) and zip code: ";

	while (cin >> weight >> zipcode)
	{
		comp_postage(weight, zipcode, areacharge, weightcharge, postage);

		entries = entries + 1;

		cout << fixed << setprecision(2);
		cout << "Area Charge: $" << areacharge << endl
			<< "Weight Charge: $" << weightcharge << endl
			<< "Postage total: $" << postage << endl
			<< "Enter weight of package (oz) and zip code (CTRL+Z if done): ";
	}
	cout << fixed << setprecision(0);
	cout << "Total entries: " << entries;
}