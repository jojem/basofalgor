// lr4_while.cpp: определяет точку входа для консольного приложения.


#include "stdafx.h"
#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include <math.h>

using namespace std;

int main()
{
	//task 1: Given a sequence of M numbers. 
	//Calculate how many negative elements there are,
	//and how many positive (including zero) elements.

	cout << "\n Task 1. ";
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
	cout << "\n  The quantity of all negative numbers is " << negcount;
	cout << "\n The quantity of all positive numbers is " << poscount << endl;

	//task 2: A sequence of numbers is entered,
	//0 is the end of the sequence.
	//Find the sum and product of all positive numbers.

	cout << "\n Task 2. ";
	int b;
	int multiply = 1, sum = 0;
	do {
		cout << "\n Enter the number: ";
		cin >> b;
		if (b > 0) {
			multiply *= b;
			sum += b;
		}			
	} while (b != 0);

	cout << " \n \n The result of multiplying of all positive numbers = " << multiply << endl;
	cout << "Sum of all positive numbers = " << sum << endl;

	system("pause");
    return 0;
}

