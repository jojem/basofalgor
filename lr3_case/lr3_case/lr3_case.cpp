// lr3_case.cpp: определяет точку входа для консольного приложения.
// Задание: Записать программу, которая на ввод знака препинания 
//выдаёт на экран дисплея его название. 
//Например, на ввод точки выдаёт текст «точка».

#include "stdafx.h"
#include<iostream>
#include<windows.h>
//include<stdio.h>
#include<conio.h>

using namespace std;

int main()
{
	HANDLE hConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	//using RGB color model

	char symbol;
	do {
		cin >> symbol;

		switch (symbol)
		{
		case '.':
			SetConsoleTextAttribute(hConsoleHandle, BACKGROUND_BLUE);
			cout << "Dot" << endl;
			break;
		case ',':
			SetConsoleTextAttribute(hConsoleHandle, BACKGROUND_RED);
			cout << "Comma" << endl;
			break;
		case ';':
			SetConsoleTextAttribute(hConsoleHandle, BACKGROUND_GREEN);
			cout << "Semicolon" << endl;
			break;
		case '!':
			SetConsoleTextAttribute(hConsoleHandle, BACKGROUND_BLUE |
				FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED | FOREGROUND_INTENSITY | BACKGROUND_INTENSITY);
			cout << "Exclamation point" << endl;
			break;
		case '?':
			SetConsoleTextAttribute(hConsoleHandle, FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_INTENSITY | BACKGROUND_BLUE);
			cout << "Question mark" << endl;
			break;
		case '*':
			SetConsoleTextAttribute(hConsoleHandle, BACKGROUND_BLUE | BACKGROUND_GREEN | BACKGROUND_RED);
			cout << "Star" << endl;
			break;
		default:
			cout << "Sorry, guy, it is too hard for me..." << endl;
			break;
		}
	} while (symbol != '0');


	return 0;
}

