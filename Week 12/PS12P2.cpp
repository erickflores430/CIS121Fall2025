#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
void load_array(string city[], double population[])
{
	int i;
	ifstream infile;

	infile.open("City.txt");

	for (i = 0; i <= 7; i++)
	{
		infile >> city[i] >> population[i];
	}

	infile.close();
}
void search_array(string city[], double population[], string scity)
{
	int i;
	bool found_flag;

	found_flag = false;

	for (i = 0; i <= 7; i++)
	{
		if (scity == city[i])
		{
			cout << fixed << setprecision(0);
			cout << city[i] << "     " << population[i] << endl;
			found_flag = true;
		}
	}
	if (found_flag == false)
	{
		cout << scity << "     " << " Is not found" << endl;
	}
}
int main()
{
	string city[8];
	double population[8];
	string scity;

	load_array(city, population);

	cout << "Enter City name, CTRL + Z to stop: ";
	while (cin >> scity)
	{
		search_array(city, population, scity);

		cout << "Enter City name, CTRL + Z to stop: ";
	}
}