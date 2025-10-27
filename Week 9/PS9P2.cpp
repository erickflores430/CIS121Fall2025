#include<iostream>
#include<iomanip>
using namespace std;
float compute_average(float at_bats, float num_hits)
{
	float average;

	average = at_bats / num_hits;

	return average;
}
int main()
{
	string name;
	float at_bats, hits, average;
	float entries = 0;

	cout << "Enter last name: ";

	while (cin >> name)
	{
		cout << "Enter number of hits and at bats: ";
		cin >> hits >> at_bats;

		average = compute_average(at_bats, hits);
		entries = entries + 1;

		cout << "Batting average for " << name << ": " << average << endl
			<< "Enter last name (CTRL + Z if done): ";
	}
	cout << "Number of players entered: " << entries;
}