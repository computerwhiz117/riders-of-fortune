// Riders of Fortune.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int i;
	//int XP;
	//const int XP = 5;
	const int MAP = 27;
	int destination[MAP] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27 };

	// Main menu of the game
	cout << "Welcome to Riders of Fortune\n" << endl;
	cout << "An open source text based fantasy adventure game created by Carlos Sanchez" << endl;

	// The user inputs to number displayed on the screen to either start the game or exit the game
	cout << "1. Start the game" << endl;
	cout << "2. Exit the game" << endl;
	cin >> i;

	if (i == 1) 
	{
		// The game starts with the beginning of the mission
		cout << "You are a young horseman named Yarra who travels to the Dragon's Dungeoun" << endl;
		cout << "where you will meet an evil red colored Dragon that holds the Chalice of Knowledge," << endl;
		cout << "an artifact that will bring you everlasting wisdom." << endl;
		cout << "Going into the Dragon's Dungeoun is a complex task as the Dragon" << endl;
		cout << "summons all the vicious monsters to protect him from his own enemies" << endl;
		cout << "heroes that will defeat the Dragon to get the Chalice of Knowledge." << endl;
		cout << "You, Yarra must have the bravery and courage to defeat the monsters and defeat the evil dragon." << endl;


		cout << "Now your adventure begins, now go find the Chalice" << endl;

		//for (int i = 0; i < MAP; ++i)

		cout << "P" << destination[MAP] << "D" << endl;
		//int *pnumbers = &destination[0];


		cout << "Make your choice: " << endl;
		cout << "1. Travel to another space on the board" << endl;
		cout << "2. Dismount and explore the current space" << endl;
		cin >> i;
	}
	
	else
	{
		// Quits the game
		cout << "Good bye";
	}

	if (i == 1)
	{
		int knife;
		cout << "You encountered a Giant Bat" << endl;
		cout << "It's HP is 3, so it's a weak monster: " << endl;
		cout << "You have a knife, select the number of attacks: " << endl;
		cin >> knife;

		if (knife >= 3)
		{
			cout << "You have defeated the Giant Bat" << endl;
			cout << "Your XP ranked up +2" << endl;
		}
		
		else
		{
			cout << "The Giant Bat stabbed you with it's claws and you are dead" << endl;
			cout << "GAME OVER";
		}
	}
	else
	{
		cout << "You got a crossbow" << endl;
		cout << "Do you want to equip it?" << endl;
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cin >> i; 
		
		if (i == 1)
		{
			cout << "Your attack is ranked up to +3" << endl;
		}

		else
		{
			cout << "You discarded the crossbow" << endl;
		}

		cout << "Make your choice: " << endl;
		cout << "1. Travel to another space on the board" << endl;
		cout << "2. Dismount and explore the current space" << endl;
		cin >> i;

		if (i == 1)
		{
			int crossbow;
			cout << "You encountered a Giant Bat" << endl;
			cout << "It's HP is 3, so it's a weak monster: " << endl;
			cout << "You have a crossbow, select the number of attacks: " << endl;
			cin >> crossbow;

			if (crossbow >= 3)
			{
				cout << "You have defeated the Giant Bat" << endl;
				cout << "Your XP ranked up +2" << endl;
			}

			else
			{
				cout << "The Giant Bat stabbed you with it's claws and you are dead" << endl;
				cout << "GAME OVER";
			}
		}

		else 
		{
			cout << "There is nothing for you to do, so you reflect upon your adventures thus far. You take the time to train and enhance your reflexes" << endl;
			cout << "You XP increases by +1" << endl;
		}

		cout << "Make your choice: " << endl;
		cout << "1. Travel to another space on the board" << endl;
		cout << "2. Dismount and explore the current space" << endl;
		cin >> i;

		if (1 == 1)
		{
			int crossbow;
			cout << "You encountered a Killer Centipede" << endl;
			cout << "It's HP is 4, it's a strong monster" << endl;
			cout << "You have a crossbow, select the number of attacks: " << endl;
			cin >> crossbow;

			if (crossbow >= 4)
			{
				cout << "You have defeated the Killer Centipede" << endl;
				cout << "Your XP ranked up +2" << endl;
			}

			else
			{
				cout << "The Killer Centipede took a bite out of you and you are dead" << endl;
				cout << "GAME OVER";
			}

		}


	}

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
