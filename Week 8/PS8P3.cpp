#include<iostream>
#include<iomanip>
using namespace std;
float compute_tuition(float credit)
{
	float t;

	t = 250 * credit;

	return t;
}
int main()
{
	string name;
	float credits, tuition, total_tuition;
	int entries;

	entries = 0;
	total_tuition = 0;

	cout << "Enter Name and number of credits taken: ";

	while (cin >> name >> credits)
	{
		tuition = compute_tuition(credits);
		total_tuition = total_tuition + tuition;
		entries = entries + 1;

		cout << "Student Name: " << name << endl
			<< "Credits taken: " << credits << endl
			<< "Tuition: " << tuition << endl;
		cout << "Enter Name and number of credits taken (CRTL + Z to end): ";
	}
	cout << "Total tuition owed: $" << total_tuition << endl
		<< "Number of entries by students: " << entries;
}