#include<iostream>
#include<iomanip>
using namespace std;
void comp_tuition(float credhours, float aid, float& tuition, float& tuitionowed)
{
	tuition = credhours * 250.0f;

	tuitionowed = tuition - aid;
}
int main()
{
	string name;
	float hours, aid, tuition, tuitionowed;
	float tuition_owed_sum = 0, entries = 0, average;

	cout << "Enter surname: ";

	while (cin >> name)
	{
		cout << "Enter credit hours and financial aid recieved: ";
		cin >> hours >> aid;

		comp_tuition(hours, aid, tuition, tuitionowed);
		
		tuition_owed_sum = tuition_owed_sum + tuitionowed;
		entries = entries + 1;

		cout << "Name: " << name << endl
			<< "Tuition: $" << tuition << endl
			<< "Tuition owed: $" << tuitionowed << endl
			<< "Enter surname (CTRL+Z if done): ";
	}
	average = tuition_owed_sum / entries;
	cout << "Total tuition owed across students: $" << tuition_owed_sum << endl
		<< "Average tuition owed: $" << average << endl
		<< "Number of entries: " << entries;
}