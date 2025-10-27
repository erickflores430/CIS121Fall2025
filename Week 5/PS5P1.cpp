#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Define Variable
	string last, grade;
	int score;

	//Input 
	cout << "Enter last name: ";
	cin >> last;
	cout << "Enter score: ";
	cin >> score;

	//Process
	if (score >= 90) {
		grade = "A";
	} else if (score >= 80) {
		grade = "B";
	} else if (score >= 70) {
		grade = "C";
	} else if (score >= 60) {
		grade = "D";
	} else if (score < 60) {
		grade = "F";
	}

	//Output 
	cout << last << endl;
	cout << "Grade: " << grade;
}