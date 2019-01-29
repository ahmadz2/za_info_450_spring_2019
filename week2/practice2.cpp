#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int userValue;
	bool prime = true;
	
	while (true)
	{
		cout << "Enter a positive integer: ";
		cin >> userValue;

		if (userValue == 0) {
			break;
		}

		for (int i = 2; i <= userValue / 2; ++i)
		{
			if (userValue % i == 0)
			{
				prime = false;
			}
		}
		if (prime)
			cout << "This is a prime number" << endl;
		else
			cout << "This is not a prime number" << endl;
	}
}
