#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include<vector>
using namespace std;

class computers {
private: 
	string make;
	string model;
	string cpu;
	string ram;
	string harddrive;
	string type;
	float cost = 0;

public:
	computers() {
		make = "Lenovo";
		model = "LE100A";
		cpu = "Intel";
		ram = "32GB";
		harddrive = "HD";
		type = "laptop";
	}

	void setmake(const string& m) { make = m; }
	string getmake() const { return make; }

	void setmodel(const string& mo) { model = mo; }
	string getmodel() const { return model; }

	void setcpu(const string& c) { cpu = c; }
	string getcpu() const { return cpu; }
	
	void setram(const string& r) { ram = r; }
	string getram()const { return ram; }

	void setharddrive(const string& h) { harddrive = h; }
	string getharddrive()const { return harddrive; }

	void settype(const string& t) { type = t; }
	string gettype()const { return type; }

	double getcost() const {
		double base = 0;

		if (make == "Lenovo")
			base = base + 1200;
		else if (make == "HP")
			base = base + 1000;
		else if (make == "Apple")
			base = base + 2000;

		if (cpu == "Intel")
			base = base + 200;

		if (ram == "16GB")
			base = base + 300;
		else if (ram == "32GB")
			base = base + 500;

		if (harddrive == "SSD")
			base = base + 500;

		if (type == "Laptop")
			base = base + 300;
		else if (type == "Tablet")
			base = base - 200;

		return base;
	}
};

int main() {
	computers computer;

	string make, model, cpu, ram, harddrive, type;
	float cost = 0;

	while (true) {
		cout << "Enter computer make (Lenovo, HP, Apple) (CTRL+Z when done): ";
		if (!(cin >> make)) break;
		computer.setmake(make);

		cout << "Enter computer model: ";
		cin >> model;
		computer.setmodel(model);

		cout << "Enter CPU (Intel, AMD): ";
		cin >> cpu;
		computer.setmodel(cpu);

		cout << "Enter computer RAM (8GB, 16GB, 32GB): ";
		cin >> ram;
		computer.setram(ram);
		
		cout << "Enter hard drive (SSD, HD): ";
		cin >> harddrive;
		computer.setharddrive(harddrive);

		cout << "Enter type (Laptop, Notebook, Tablet, Desktop): ";
		cin >> type;
		computer.settype(type);

		cout << endl << "-- Reciept --" << endl
			<< "Make: " << computer.getmake() << endl
			<< "Model: " << computer.getmodel() << endl
			<< "CPU: " << computer.getcpu() << endl
			<< "RAM: " << computer.getram() << endl
			<< "Hard Drive: " << computer.getharddrive() << endl
			<< "Type: " << computer.getmodel() << endl
			<< "Total Cost: $" << computer.getcost() << endl << endl;

	}
}