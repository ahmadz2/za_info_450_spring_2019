#include "pch.h"
#include <iostream>
using namespace std;

class Employee {

private:
	char first_name[255];
	char last_name[255];
	bool employee_type;
	int salary;

public:
	void set_first_name(char* in_name) {
		strcpy(first_name, in_name);
	}
	void set_last_name(char* in_name) {
		strcpy(last_name, in_name);
	}
	void set_employee_type(bool in_p) {
		employee_type = in_p;
	}
	void set_salary(int in_salary) {
		salary = in_salary;
	}

	void printEntry() {

		cout << last_name << ", ";
		cout << first_name << ": $";
		if (employee_type = true) {
			cout << employee_type << endl;
		} else {
			cout << salary / 2000 << endl;
		}
	}
};

int main() {
	Employee entries[3];

	for (int x = 0; x < 3; x++) {
		cout << "Entry: " << x << endl;
		char *myvalue = (char *)malloc(255);

		cout << "Enter a first name: ";
		cin.getline(myvalue, 255);
		entries[x].set_first_name(myvalue);
		cout << "Entered value: " << myvalue << endl;

		cout << "Enter a last name: ";
		cin.getline(myvalue, 255);
		entries[x].set_last_name(myvalue);

		cout << "Enter employee type: ";
		cout << "True for hourly employee. False for salary employee";
		cin.getline(myvalue, 255);
		entries[x].set_employee_type(myvalue);

		cout << "Enter employee salary: ";
		cout << "For hourly, enter per hour pay";
		cout << "For salaried, enter annual salary";
		cin.getline(myvalue, 255);
		entries[x].set_salary(myvalue);
	}

	for (int x = 0; x < 3; x++) {
		entries[x].printEntry();
	}
}
