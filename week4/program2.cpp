#include "pch.h"
#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	string name;
	string nameList[2][30];

	for (int i = 0; i < 2; i++)
	{
		for (int x = 0; x < 30; x++)
		{
			cout << "Enter Student Name: " << endl;
			cout << "Press Enter to exit." << endl;
			getline(cin, name);

			if (name == "")
			{
				break;
			}
			else
			{
				nameList[i][x] = name;
			}
		}
		break;
	}

	cout << "These are your students:" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int x = 0; x < 30; x++)
		{
			cout << nameList[i][x] << endl;
		}
	}
}