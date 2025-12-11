#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<vector>
using namespace std;

struct student {
	string first;
	string last;
	char code;
	float credits = 0;
	float tuition = 0;
};

float compute_tuition(char code, float credits) {
	float credit_cost;

	if (code == 'I') {
		credit_cost = 250.00;
	}
	else {
		credit_cost = 500.00;
	}

	return credit_cost * credits;
}

void display(const vector<student>& students) {
	cout << "Tuition report";

	for (const student& s : students) {
		cout << "Name: " << s.first << " " << s.last << endl
			<< "District Code: " << s.code << endl
			<< "Credits: " << s.credits << endl
			<< "Tuition owed: $" << s.tuition << endl << endl;
	}

	cout << "Total Students: " << students.size() << endl;
}

int main() {
	vector<student> students;
	student temp;

	cout << "Enter student info: (CTRL + Z to stop) " << endl;

	while (true) {
		cout << "First name: ";
		if (!(cin >> temp.first)) break;

		cout << "Last name: ";
		cin >> temp.last;

		cout << "Distict code (I or O): ";
		cin >> temp.code;

		cout << "Credits enrolled: ";
		cin >> temp.credits;
		cout << endl;

		temp.tuition = compute_tuition(temp.code, temp.credits);

		students.push_back(temp);
		
	}
	display(students);
}
