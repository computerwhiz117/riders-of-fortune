// Riders of Fortune.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int i;
	const int MAP = 27;
	int destination[MAP] = { 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27 };

	// Main menu of the game
	cout << "Welcome to Riders of Fotune\n" << endl;
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
		cout << "heros that will defeat the Dragon to get the Chalice of Knowledge." << endl;
		cout << "You, Yarra must have the bravery and courage to defeat the monsters and defeat the evil dragon." << endl;

		cout << "Now your adventure begins, now go find the Chalice" << endl;
		cout << "P" << destination << "D" << endl;

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
		cout << "You got a crossbow";
		cout << "Do you want to equip it?";
		cout << "1. Yes" << endl;
		cout << "2. No" << endl;
		cin >> i;

		if (i == 1)
		{
			cout << "Your attack is ranked up to +3";
		}

		else
		{
			cout << "You discarded the crossbow";
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
			cout << "You have a knife, select the number of attacks: " << endl;
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


	}
    return 0;
}

