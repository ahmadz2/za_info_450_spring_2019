#include "pch.h"
#include <iostream>
#include <ctype.h>
#include <math.h> 
using namespace std;

int main() {
	int userValue;
	int myArray[5];
	int secondArray[1];

	double num1 = 0;
	double num2 = 0;
	double num3 = 0;
	double num4 = 0;
	double mean = 0;

	//Reads in user values into Array
	for (int i = 0; i < 10; i++) {
		cout << "Enter 10 numbers: ";
		cin >> myArray[i];
	}

	cout << " " << endl;

	//Adds all values in array to calculate mean later
	for (int i = 0; i < 10; i++) {
		num1 = myArray[i];
		num2 += num1;
	}

	mean = num2 / 10;
	cout << "This is the mean: " << mean << endl;
	cout << " " << endl;

	//This subtracts the mean from each number and squares it AND adds all squared differences to secondArray
	cout << "The mean subtracted by each number and squared: " << endl;
	for (int i = 0; i < 10; i++) {
		num1 = myArray[i];

		secondArray[i] = pow(num1 - mean, 2);
		cout << pow(num1-mean, 2) << endl;
	}

	cout << " " << endl;

	//Adds all values in secondArray to calculate mean later
	for (int i = 0; i < 10; i++) {
		num3 = secondArray[i];
		num4 += num3;
	}
	cout << "This is the secondArray mean: " << num4/10 << endl;
	cout << " " << endl;

	//Square root of secondArray mean
	cout << "The square root of the second array mean is: " << sqrt(num4 / 10) << endl;
}