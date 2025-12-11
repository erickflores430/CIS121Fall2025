#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<vector>
using namespace std;

class membership {
private: 
	string first;
	string last;
	int age;
	string type;

public:
	membership() {
		first = "Not Entered";
		last = "Not Entered";
		age = 18;
		type = "Bronze";
	}

	void setfirst(const string& f) { first = f; }
	string getfirst() const { return first; }

	void setlast(const string& l) { last = l; }
	string getlast() const { return last; }

	void setage(const int& a) { age = a; }
	int getage() const { return age; }
	
	void settype(const string& t) { type = t; }
	string gettype() const { return type; }

	double getcost() const {
		double base = 500;

		if (type == "Gold")
			base = 1200.00;
		else if (type == "Silver")
			base = 1000.00;
		else if (type == "Bronze")
			base = 500.00;

		if (age > 50)
			base = base * .90;

		return base;
	}
};

int main() {
	membership member;

	string first, last, type;
	int age;

	while (true) {
		cout << "Enter First name (Ctrl+Z to end):";
		if (!(cin >> first)) break;
		member.setfirst(first);

		cout << "Enter last name: ";
		cin >> last;
		member.setlast(last);

		cout << "Enter age: ";
		cin >> age;
		member.setage(age);

		cout << "Enter Membership type (Gold, Silver, Bronze) : ";
		cin >> type;
		member.settype(type);

		cout << endl << "-- Membership info --" << endl
			<< "Name: " << member.getfirst() << " " << member.getlast() << endl
			<< "Age: " << member.getage() << endl
			<< "Membership type: " << member.gettype() << endl
			<< "Membership cost: " << member.getcost() << endl << endl;
	}
}