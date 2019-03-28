// Riders of Fortune Revised.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string>

using namespace std;

const int NUM_OF_TILES = 28;
char entPosOnMap[NUM_OF_TILES];
const int numWeapons = 5;
const int MONSTER_HEALTH = 3 + rand() % 3;

char weapons[] = { 'C', 'F', 'B', 'G', 'S' };
string fullWeapons[] = { "Crossbow", "Flail", "Broadsword", "Dragonslayer", "Spell of the Gods" };

//Defines the player

class Player 
{
	private:
		int weaponModifier = 0;
		int currentPosOnBoard = 0;
		int xp = 0;

	public:
		Player();
		int attack(int dieRollVal);
		int getCurrPlayerSquare();
		int getPlayerExperience();
		string getCurrentWeapon();
		void playerMove(int numSpacesToMove);
		void setWepValue(int newWeaponModifier);
		void IncreasePlayerExperience(int XPAmountToIncrease);

};

Player::Player() 
{
	currentPosOnBoard = 0;
	weaponModifier = 0;
}

void Player::playerMove(int numSpacesToMove) 
{

	currentPosOnBoard = 0;
	weaponModifier = 0;
}

//void Player::playerMove(int numSpacesToMove) 
//{
	//currentPosOnBoard += numSpacesToMove;
	//if (currentPosOnBoard == NUM_OF_TILES - 1) { currentPosOnBoard++; }
//
}

void Player::setWepValue(int newWeaponModifier) 
{
	if (weaponModifier < newWeaponModifier) { weaponModifier = newWeaponModifier; }
}

void Player::IncreasePlayerExperience(int XPAmountToIncrease) { xp += XPAmountToIncrease; }

int Player::attack(int dieRollVal) { return dieRollVal + weaponModifier; }
int Player::getCurrPlayerSquare() { return currentPosOnBoard; }
int Player::getPlayerExperience() { return xp; }
string Player::getCurrentWeapon() 
{
	if (weaponModifier == 0) { return "Knife"; }
	for (int i = 0; i < numWeapons; i++) {
		if (weaponModifier - 3 == i) { return fullWeapons[i]; }
	}
}

class Monster {
private:
	int health;
public:
	Monster();
};

Monster::Monster() { health = MONSTER_HEALTH; }

// Prints the map for the player

void printMapAndStats(Player &Yarra) 
{
	int playerPos;
	for (int i = 0; i < NUM_OF_TILES; i++) {
		playerPos = Yarra.getCurrPlayerSquare();
		if (playerPos == i || entPosOnMap[i] == 'D') {
			if (i == playerPos) {
				cout << 'P';
			}
			else {
				cout << entPosOnMap[i];
			}
		}
		else {
			cout << "*";
		}
	}
	cout << "\tYour XP " << Yarra.getPlayerExperience() << "\tCurrent Weapon: " << Yarra.getCurrentWeapon();
}

bool battleTime(Player &Yarra, Monster &Monster) 
{
	char prompt;
	cout << "You've encountered a monster!\n\n";
	cout << "Press any key to roll the die";
	cin >> prompt;

	int dieRoll = 1 + rand() % 6;
	int totalAtk = Yarra.attack(dieRoll);

	cout << "\nThe monster has " << MONSTER_HEALTH << " health. \n";
	cout << "You rolled a " << dieRoll << ". Your total attack was " << totalAtk << ".\n\n";

	if (totalAtk >= MONSTER_HEALTH) 
	{
		Yarra.IncreasePlayerExperience(2);
		cout << "Monster has been killed. XP increased by 2!\n\n";
		return true;
	}
	else
	{
		cout << "The monster ate you. GAME OVER!!!!!! \n";
		return false;
	}
	return true;
}

//Prepares the main act of the player to fight the enemies which are monsters and the final boss which is the dragon

bool mainAct(Player &Yarra, Monster &Monster)
{
	int playerInput;
	int stuffInTheLocation = Yarra.getCurrPlayerSquare();

	printMapAndStats(Yarra);
	cout << "\n\n";
	cout << "Make your Choice:\n\n 1. Travel to another space on the board 2. Dismount and explore the current space \n\n";
	cin >> playerInput;
	char entity = entPosOnMap[stuffInTheLocation];
	if (stuffInTheLocation >= 28) 
	{
		if (Yarra.getPlayerExperience() < 5) 
		{
			cout << "\n\nAlas, the dragon's eyes stare at you and places you under his spell. You try to move but fail to do so and find yourself torched bu the dragon's fire. If only you had more experience, you could have seen it coming. GAME OVER!!!!!!!!!!!\n";
			return false;
		}
		else
		{
			char prompt;
			cout << "The dragon stares at you. It has 10 HP.\n\n";
			cout << "Press a button to roll the die";
			cin >> prompt;
			
			int dieRoll = 1 + rand() % 6;
			int totalAtk = Yarra.attack(dieRoll); 

			cout << "You rolled a" << dieRoll << ". Your total attack was" << totalAtk << ".\n\n";

			if (totalAtk >= 10) 
			{
				cout << "\n\n due to your cunning and experience, you have defeated the deadly dragon. Your quest has ended good sir. You've obtained the Chalice of Knoledge and all of earth's mysteries are revealed. YOU WIN!!!!!!!!!!!!!!!!!";
				return false;
			}
			else
			{
				cout << "\n\nAlas, the dragon's eyes stare at you and places you under his spell. You try to move but fail to do so and find yourself torched bu the dragon's fire. If only you had more experience, you could have seen it coming. GAME OVER!!!!!!!!!!!\n";
				return false;
			}

			return false;
		}
	}
	else if (playerInput == 1)
	{
		int amountPlayerRolled = 1 + rand() % 6;
		Yarra.playerMove(amountPlayerRolled);
		cout << "\nYou moved forward" << amountPlayerRolled << " spaces \n\n";
	}
	else if (playerInput == 2)
	{
		if (entity == 'M') {
			bool isAlive = battleTime(Yarra, Monster);
			if (!(isAlive)) { return false; }
			entPosOnMap[ stuffInTheLocation ] = 'U';
		}
		else if (entity == 'E') {
			Yarra.IncreasePlayerExperience(1);
			cout << "\n\nThere is nothing for you to do, so you reflect upon your adventures thus far. You take the time to train and enhance your reflexes. Your XP incresed by 1\n\n";
			entPosOnMap[stuffInTheLocation] = 'U';
		}
		else if (entity == 'U') {
			Yarra.IncreasePlayerExperience(1);
			cout << "\n\nThere is nothing to do here\n\n";
			return true;
		}
		else
		{
			int playerPos = Yarra.getCurrPlayerSquare();
			for (int i = 0; i < numWeapons; i++) 
			{
				if (entPosOnMap[playerPos] == weapons[i])
				{
					cout << "\n\nYou found a " << fullWeapons[i];
						Yarra.setWepValue(i + 3);
					entPosOnMap[stuffInTheLocation = 'U'];
					break;
					}
				}
			}
		}
	}


//The start of the game

void setup()
{
	cout << "Welcome to Riders of Fortune, the open source text based fantasy adventure game\n\n\n";

	entPosOnMap[0] = 'U';
	entPosOnMap[NUM_OF_TILES - 1] = 'D';

	for (int i = 1; i < NUM_OF_TILES - 1; i++) 
	{
		entPosOnMap[i] = 'M';
	}

	int numPostoMakeEmpty = 7;
	for (int i = 0; i < numPostoMakeEmpty; i++) {
		int posToEmpty = 1 + rand() % NUM_OF_TILES - 2;
		while (entPosOnMap[posToEmpty] == 'E')
		{
			posToEmpty = 1 + rand() % NUM_OF_TILES - 2;
		}
		entPosOnMap[posToEmpty] = 'E';
	}

	int posToWeaponize = 1 + rand() % NUM_OF_TILES - 2;
	for (int i = 1; i < numWeapons; i++) {
		while (entPosOnMap[posToWeaponize] != 'M')
		{
			posToWeaponize = 1 + rand() % NUM_OF_TILES - 2;
		}
		entPosOnMap[posToWeaponize] = weapons[i];
	}
}

int main()
{
	srand(time(NULL));
	Player Yarra;
	Monster Monster;
	setup();

	bool isAlive = mainAct(Yarra, Monster);
	while (isAlive == true)
	{
		isAlive = mainAct(Yarra, Monster);
	}
	return 0;
}