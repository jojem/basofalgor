// lr4_while.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include <math.h>

using namespace std;

int main()
{
	float a;
	int poscount, negcount, i, n;
	cout << "\n Enter amount of numbers:";
	cin >> n;

	for (poscount = 0, negcount = 0, i = 1; i <= n; i++)
	{
		cout << "Enter the number: ";
		cin >> a;
		if (a < 0) negcount++;
		else poscount++;
	}
	cout << "\n The quantity of all negative numbers is " << negcount;
	cout << "\n The quantity of all positive numbers is " << poscount;

    return 0;
}

