#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	while (true) {
		int userValue;
		cout << "Enter a positive value: ";
		cin >> userValue;
		if (userValue != 0)
		{
			cout << "The square is: " << pow(userValue, 2.0) << endl;
		}
		else
		{
			break;
		}
	}
}
