#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int year;
	
	while (true) {
		cout << "Type a year: " << endl;
		cout << "Enter 0 to break " << endl;
		cin >> year;

		if (year == 0) {
			break;
		}

		if (year % 4 == 0) {
			if (year % 100 == 0 && year % 400 == 0) {
				cout << "This year is a leap year" << endl;
			}
			else {
				cout << "This year is not a leap year" << endl;
			}
		}
		else
		{
			cout << "This year is not a leap year" << endl;
		}
	}
}