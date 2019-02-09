// Riders of Fortune.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	const int MAP = 27;
	int destination[MAP] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27 };

	cout << "Welcome to Riders of Fotune\n" << endl;
	cout << "You are a young horseman named Yarra who travels to the Dragon's Dungeoun" << endl;
	cout << "where you will meet with an evil red colored Dragon that holds the Chalice of Knowledge, an artifact that will bring you everlasting wisdom" << endl;
	cout << "You adventure begins, now go find the Chalice" << endl;
	cout << "P" << MAP << "D";
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
