#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	// Variable
	string last;
	double num_hits, at_bats, average;
	int num_players = 0;

	// Input
	cout << "Enter last name, hits, and at bats. (Ctrl+Z to end)" << endl;

	// Process
	while (cin >> last >> num_hits >> at_bats)
	{
		average = num_hits / at_bats;
		cout << "Player: " << last << endl
			<< "Batting Average: " << average << endl;

		num_players = num_players + 1;
		
		cout << "Enter last name, hits, and at bats. (Ctrl+Z to end)" << endl;
	}
	cout << "Entries entered: " << num_players;
}
