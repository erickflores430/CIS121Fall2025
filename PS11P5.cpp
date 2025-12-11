#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
void comp_tuition(string code, float credit, float& cost, float& tuition, float& fees)
{
	if (code == "I") {
		cost = 250.0f;
	}
	else if (code == "O") {
		cost = 500.0f;
	}

	tuition = credit * cost;

	fees = tuition * .10f;
}
int main()
{
	ifstream infile;
	string code, name;
	float credit, cost, tuition, fees;
	float total_tuition = 0, students = 0;

	infile.open("Student.txt");

	while (!infile.eof())
	{
		infile >> name >> code >> credit;

		comp_tuition(code, credit, cost, tuition, fees);

		total_tuition = total_tuition + tuition;
		students = students + 1;

		cout << "Name: " << name << endl
			<< "Student code: " << code << endl
			<< "Cost per credit hour: $" << cost << endl
			<< "Credits taken: " << credit << endl
			<< "Tuition owed: $" << tuition << endl
			<< "Course fees (10%): $" << fees << endl << endl;
		
	}
	float average = total_tuition / students;

	cout << "Sum of tuition's owed: $" << total_tuition << endl
		<< "Number of students: " << students << endl
		<< "Average tuition owed: $" << average;
}