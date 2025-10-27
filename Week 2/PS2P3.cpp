#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//Define Variables
	int length, width;
	int area, circumference;

	//Input Phase
	cout << "To find the area and circuference, please provide the length and width." << endl;
	cout << "Length: ";
	cin >> length; 
	cout << "Width: ";
	cin >> width;

	//Output Phase
	area = length * width;
	circumference = (2 * length) + (2 * width);

	cout << "Area: " << area << endl;
	cout << "circumference: " << circumference;

	return 0;
}// End of main