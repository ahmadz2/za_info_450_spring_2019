#include "pch.h"
#include <iostream>
using namespace std;

const double pi = 3.14;

double calculateCircumference(double radius) {
	double circumference;

	circumference = 2 * pi * radius;
	return circumference;
}

int main()
{
	double radius;
	
    cout << "Enter Radius: ";
	cin >> radius;

	cout << "The radius is: ";
	cout << calculateCircumference(radius);
}
