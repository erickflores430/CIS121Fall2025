#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
void load_array(string first[], string last[], float salary[])
{
	int i;
	ifstream infile;

	infile.open("Empldata.txt");

	for (i = 0; i <= 9; i++)
	{
		infile >> first[i] >> last[i] >> salary[i];
	}

	infile.close();
}
void print_array(string first[], string last[], float salary[])
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		cout << first[i] << "  " << last[i] << "  " << salary[i] << endl;
	}
}
void search_array(string first[], string last[], float salary[], string slast)
{
	int i;
	bool found_flag;

	found_flag = false;

	for (i = 0; i <= 9; i++)
	{
		if (slast == last[i])
		{
			cout << first[i] << "  " << last[i] << "  " << salary[i] << endl;
			found_flag = true;
		}
	}
	if (found_flag == false)
	{
		cout << slast << " Not found" << endl;
	}
}
int main()
{
	string first[10], last[10];
	float salary[10];
	string slast;

	load_array(first, last, salary);
	print_array(first, last, salary);

	cout << "Enter last name for search, CTRL + Z to end: ";
	
	while (cin >> slast)
	{
		search_array(first, last, salary, slast);

		cout << "Enter last name for search, CTRL + Z to end: ";
	}
}