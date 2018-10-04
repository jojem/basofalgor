// lab_rab1_cons_intr.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
	float Z, C, Y ;
	float a, b, c, x;

	cout << " a = ";
	cin >> a;
	cout << " b = ";
	cin >> b;
	cout << " c = ";
	cin >> c;
	cout << " x = ";
	cin >> x;

	Z = (a + sqrt(pow(a, 3)))*tan(x) + pow(a, 4);
	Y = (pow(x, 3) + pow(x, 2) * pow(sin(b*x), 2) + c )/ (1 + (pow(x, 2) + c )/(1 - x));
	C = (a*x + pow(b,3))/(pow(pow((a-b), 4), 1./5.));


	cout << '\n' << " Z = " << Z << '\n';
	cout << '\n' << " Y = " << Y << '\n';
	cout << '\n' << " C = " << C << '\n';
	system("Pause");

	float L, S, D;
	cout << " \n \n set the circumference: L = ";
	cin >> L;
	D = L / 3.14;
	S = (3.14 * pow(D, 2)) / 4;
	cout << '\n' << " S = " << S << '\n';
	
	system("Pause");

	return 0;


}

