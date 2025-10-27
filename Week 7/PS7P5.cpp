#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	// Variable
	string last, code;
	int credits, students = 0;
	double rate_ph = 0, tuition;
	double tuition_total = 0, total_credits = 0;

	// Input
	std::cout << "Enter Last name, credit hours, and district code ('I' for In district. 'O' for out of district): " << endl;

	// Process
	while (cin >> last >> credits >> code)
	{
		if (code == "I") {
			rate_ph = 250;
		}
		else if (code == "O") {
			rate_ph = 550;
		}
		tuition = credits * rate_ph;

		tuition_total = tuition_total + tuition;
		total_credits = total_credits + credits;
		students = students + 1;

		std::cout << "Student name: " << last << endl
			<< "Student tuition total: $" << tuition << endl
			<< "Enter Last name, credit hours, and district code ('I' for In district. 'O' for out of district): " << endl
			<< "(Ctrl + Z when done): ";
	}
	// Output
	std::cout << "Total tuition owed for all students: $" << tuition_total << endl
		<< "Total credits taken for all students: " << total_credits << endl
		<< "Total students registered: " << students;
}