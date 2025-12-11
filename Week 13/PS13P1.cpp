#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<vector>
using namespace std;

void display_cars(const vector<string>& makes, const vector<string>& models) {
	cout << "Car list: "<< endl;
	for (size_t i = 0; i < makes.size(); ++i) {
		cout << "car " << (i + 1) << ": " << makes[i] << " " << models[i] << endl;
	}
}

int main() {
	int numCars;

	cout << "Enter the number of cars: ";
	cin >> numCars;
	cin.ignore();

	vector<string> makes(numCars);
	vector<string> models(numCars);

	for (int i = 0; i < numCars; ++i) {
		cout << "Enter car make: " << (i + 1) << ": ";
		getline(cin, makes[i]);

		cout << "Enter model for car " << (i + 1) << ": ";
		getline(cin, models[i]);
	}

	display_cars(makes, models);
}