// lr2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
	float K, L, N, Max, Min;

	cout << "\n Set K > ";
	cin >> K;
	cout << "\n Set L > ";
	cin >> L;
	cout << "\n Set N > ";
	cin >> N;

	if (K >= L & K >= N) {
		Max = 1;
		if (L >= N) Min = 3;
		else Min = 2;
	}
	else if (L >= K & L >= N) {
		Max = 2;
		if (K >= N) Min = 3;
		else Min = 1;
	}
	else {
		Max = 3;
		if (K >= L) Min = 2;
		else Min = 1;
	}

	cout << '\n' << "Max = " << Max << '\n' << "Min = " << Min << '\n';

	system("pause");
	return 0;
}

