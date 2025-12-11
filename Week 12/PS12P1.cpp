#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
void load_arrays(string first[], string last[], float gpa[])
{
	int i;
	ifstream infile;

	infile.open("Data.txt");

	for (i = 0; i <= 9; i++)
	{
		infile >> first[i] >> last[i] >> gpa[i];
	}

	infile.close();
}
void print_arrays(string first[], string last[], float gpa[])
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		cout << first[i] << "     " << last[i] << "     " << gpa[i] << endl;
	}
}
void reverse_arrays(string first[], string last[], float gpa[])
{
	int i;

	for (i = 9; i >= 0; i--)
	{
		cout << first[i] << "    " << last[i] << "     " << gpa[i] << endl;
	}
}
int main()
{
	string first[10], last[10];
	float gpa[10];

	load_arrays(first, last, gpa);

	print_arrays(first, last, gpa);

	cout << endl;

	reverse_arrays(first, last, gpa);

	return 0;
}