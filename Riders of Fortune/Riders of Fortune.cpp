// Riders of Fortune.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int i;
	int Yarra = 0;
	int *weapon;
	int battle;
	int *XP;
	int attack = 0;
	int bat = 3;
	int centipede = 4;
	int armorsaurus = 5;
	int spider = 6;
	int serpent = 7;
	int dragon = 10;
	int *monster;
	int *boss;
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
		// The game starts with the story to understand's the player's purpose in playing the game
		cout << "You are a young horseman named Yarra who travels to the Dragon's Dungeoun" << endl;
		cout << "where you will meet an evil red colored Dragon that holds the Chalice of Knowledge," << endl;
		cout << "an artifact that will bring you everlasting wisdom." << endl;
		cout << "Going into the Dragon's Dungeoun is a complex task as the Dragon" << endl;
		cout << "summons all the vicious monsters to protect him from his own enemies" << endl;
		cout << "heroes that will defeat the Dragon to get the Chalice of Knowledge." << endl;
		cout << "You, Yarra must have the bravery and courage to defeat the monsters and defeat the evil dragon." << endl;


		cout << "Now your adventure begins, go find the Chalice" << endl;



		cout << "P" << destination[MAP] << "D" << endl;
		//int *pnumbers = &destination[0];

		//The player makes their decision on how they want to proceed in the game
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

		monster = &bat;


		cout << "You encounter a Giant Bat" << endl;
		cout << "It's HP is " << bat << ", it's a weak monster: " << endl;
		cout << "You have a knife, select the number of attacks: " << endl;
		cin >> battle;

		if (attack >= bat)
		{

			XP = &Yarra;

			Yarra = Yarra + 2;

			cout << "You have defeated the Giant Bat" << endl;
			cout << "Your XP ranked up to +" << Yarra << endl;
			cout << "Make your choice" << endl;
			cout << "1. Travel to another space on the board" << endl;
			cout << "2. Dismount and explore the current space" << endl;
			cin >> i;

			//if (i == 1)
			//{
				//cout << "There is nothing for you to do, so you reflect upon your adventures thus far. You take the time to train and enhance your reflexes" << endl;
				//cout << "You XP increases by +1" << endl;
				//cout << "Make your choice: ";
				//cout << "1. Travel to another space on the board" << endl;
				//cout << "2. Dismount and explore the current space" << endl;
				//cin >> i;
			
			//}
			//else
			//{
				// Need to finish off writing this code
			//}

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
			weapon = &attack;

			attack = attack + 3;

			cout << "Your attack is ranked up to +" << attack << endl;
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
			monster = &bat;


			cout << "You encounter a Giant Bat" << endl;
			cout << "It's HP is " << bat << ", it's a weak monster"  << endl;
			cout << "You have a crossbow, select the number of attacks: " << endl;
			cin >> battle;

			if (attack >= bat)
			{

				XP = &Yarra;

				Yarra = Yarra + 2;

				cout << "You have defeated the Giant Bat" << endl;
				cout << "Your XP ranked up +" << Yarra << endl;
			}

			else
			{
				cout << "The Giant Bat stabbed you with it's claws and you are dead" << endl;
				cout << "GAME OVER";
			}
		}

		

		cout << "Make your choice: " << endl;
		cout << "1. Travel to another space on the board" << endl;
		cout << "2. Dismount and explore the current space" << endl;
		cin >> i;

		if (i == 1)
		{

			monster = &centipede;
			XP = &Yarra;

			Yarra = Yarra + 2;

			cout << "You encounter a Killer Centipede" << endl;
			cout << "It's HP is " << centipede << ", it's a moderate monster" << endl;
			cout << "You have a crossbow, select the number of attacks: " << endl;
			cin >> battle;

			if (attack >= centipede)
			{
				cout << "You have defeated the Killer Centipede" << endl;
				cout << "Your XP ranked up +" << Yarra << endl;
			}

			else
			{
				cout << "The Killer Centipede took a bite out of you and you are dead" << endl;
				cout << "GAME OVER";
			}

		}
		
		else
		{
			cout << "You got a flail" << endl;
			cout << "Do you want to equip it?" << endl;
			cout << "1. Yes" << endl;
			cout << "2. No" << endl;
			cin >> i;

			if (i == 1)
			{
				weapon = &attack;
				attack = attack + 4;

				cout << "Your attack is ranked up to +" << attack << endl;
			}
			else
			{
				cout << "You discarded the flail" << endl;
			}

			cout << "Make your choice: " << endl;
			cout << "1. Travel to another space on the board" << endl;
			cout << "2. Dismount and explore the current space" << endl;
			cin >> i;

			if (i == 1)
			{
				monster = &centipede;
				XP = &Yarra;
				Yarra = Yarra + 2;

				cout << "You encounter a Killer Centipede" << endl;
				cout << "It's HP is " << centipede << ", it's a moderate monster" << endl;
				cout << "You have a flail, select the number of attacks" << endl;
				cin >> battle;

				if (attack >= centipede)
				{
					cout << "You have defeated the Killer Centipede" << endl;
					cout << "Your XP ranked up to +" << Yarra << endl;

					cout << "Make your choice: " << endl;
					cout << "1. Travel to another space on the board" << endl;
					cout << "2. Dismount and explore the current space" << endl;
					cin >> i;

					if (i == 1)
					{
						monster = &armorsaurus;

						XP = &Yarra;
						Yarra = Yarra + 2;

						cout << "You encounter an Armorsaurus" << endl;
						cout << "It's HP is " << armorsaurus << ", It's a strong monster" << endl;
						cout << "You have a flail, select the number of attacks" << endl;
						cin >> battle;

						if (attack >= armorsaurus)
						{
							cout << "You have defeated the Armorsaurus" << endl;
							cout << "Your XP ranked up to +" << Yarra << endl;

							cout << "Make your choice: " << endl;
							cout << "1. Travel to another space on the board" << endl;
							cout << "2. Dismount and explore the current space" << endl;
							cin >> i;
						}

						else

						{
							cout << "The Armorsaurus, stomped and crushed on you with it's legs and you are dead" << endl;
							cout << "GAME OVER";
						}

					}
					else
					{
						cout << "You got a Broad Sword" << endl;
						cout << "Do you want to equip it?" << endl;
						cout << "1. Yes" << endl;
						cout << "2. No" << endl;
						cin >> i;

						if (i == 1)
						{
							weapon = &attack;
							attack = attack + 5;

							cout << "Your attack is ranked up to +" << attack << endl;


							cout << "Make your choice: " << endl;
							cout << "1. Travel to another space on the board" << endl;
							cout << "2. Dismount and explore the current space" << endl;
							cin >> i;
				}
					else
					{

						cout << "You discarded the Broad Sword" << endl;
						
					}

							if (i == 1)
							{
								monster = &armorsaurus;

								XP = &Yarra;
								Yarra = Yarra + 2;

								cout << "You encounter an Armorsaurus" << endl;
								cout << "It's HP is " << armorsaurus << ", It's a strong monster" << endl;
								cout << "You have a Broad Sword, select the number of attacks" << endl;
								cin >> battle;

								if (attack >= armorsaurus)
								{
									cout << "You have defeated the Armorsaurus" << endl;
									cout << "Your XP ranked up to +" << Yarra << endl;

									cout << "Make your choice: " << endl;
									cout << "1. Travel to another space on the board" << endl;
									cout << "2. Dismount and explore the current space" << endl;
									cin >> i;

									if (i == 1) 
									{
										
										monster = &spider;
										XP = &Yarra;

										cout << "You encounter a Black Spider" << endl;
										cout << "It's HP is " << spider << ", It's a stronger monster" << endl;
										cout << "You have a Broad Sword, select the number of attacks" << endl;
										cin >> battle;

								if (attack >= spider)
								{
									cout << "You have defeated the Black Spider" << endl;
									cout << "Your XP ranked up to +" << Yarra << endl;
								}

								else
								{
									cout << "The Black Spider wrapped you under it's web and stabbed you with it's legs" << endl;
									cout << "GAME OVER";
								}
									}
									else
									{
										cout << "You got the Dragon Slayer" << endl;
										cout << "Do you want to equip it?" << endl;
										cout << "1. Yes" << endl;
										cout << "2. No" << endl;
										cin >> i;

										if (i == 1)
										{
											weapon = &attack;
											attack = attack + 6;

											cout << "Your attack ranked up to +" << attack << endl;

											cout << "Make your choice: " << endl;
											cout << "1. Travel to another space on the board" << endl;
											cout << "2. Dismount and explore the current space" << endl;
											cin >> i;
											
										}
										else
										{
											cout << "You discarded the Dragon Slayer" << endl;
										}

										if (i == 1)
										{

											monster = &spider;

											XP = &Yarra;
											Yarra = Yarra + 2;

											cout << "You encounter a Black Spider" << endl;
											cout << "It's HP is " << spider << ", It's a stronger monster" << endl;
											cout << "You have the Dragon Slayer, select the number of attacks" << endl;
											cin >> battle;

											if (attack >= spider)
											{
											cout << "You have defeated the Black Spider" << endl;
											cout << "Your XP ranked up to +" << Yarra << endl;

											cout << "Make your Choice: " << endl;
											cout << "1. Travel to another space on the board" << endl;
											cout << "2. Dismount and explore the current space" << endl;
											cin >> i;

											if (i == 1)
											{
												monster = &serpent;

												XP = &Yarra;
												Yarra = Yarra + 2;

												cout << "You encounter a Black Serpent" << endl;
												cout << "It's HP is " << serpent << ", it's the strongest monster" << endl;
												cout << "You have the Dragon Slayer, select the nummber of attacks" << endl;
												cin >> battle;

												if (attack >= serpent)
												{
													cout << "You have defeated the Black Serpent" << endl;
													cout << "Your XP ranked up to +" << Yarra << endl;

													cout << "Make your Choice: " << endl;
													cout << "1. Travel to another space on the board" << endl;
													cout << "2. Dismount and explore the current space" << endl;
													cin >> i;
												}
												else
												{
													cout << "The Black Serpent snagged you in to it's mouth and used it's fangs to penetrate venom into your body and you are dead" << endl;
													cout << "GAME OVER";
												}

												
											}
											else
												{
													cout << "You got the Spell of The Gods" << endl;
													cout << "Do you want to equip it?" << endl;
													cout << "1. Yes" << endl;
													cout << "2. No" << endl;
													cin >> i;

													if (i == 1)
													{
														weapon = &attack;
														attack = attack + 7;

														cout << "Your attack ranked up to +" << attack << endl;

														cout << "Make your choice: " << endl;
														cout << "1. Travel to another space on the board" << endl;
														cout << "2. Dismount and explore the current space" << endl;
														cin >> i;

														if (i == 1)
														{
															monster = &serpent;

															XP = &Yarra;
															Yarra = Yarra + 2;

															cout << "You encounter a Black Serpent" << endl;
															cout << "It's HP is " << serpent << ", it's the strongest monster" << endl;
															cout << "You have the Spell of the Gods, select the number of attacks" << endl;
															cin >> battle;

															if (attack >= serpent)
															{
																cout << "You have defeated the Black Serpent" << endl;
																cout << "You XP ranked up to +" << Yarra << endl;

																cout << "Make your choice: " << endl;
																cout << "1. Travel to another space to the board" << endl;
																cout << "2. Dismount and explore the current space" << endl;
																cin >> i;

																if (i == 1)
																{
																	boss = &dragon;
																	
																	XP = &Yarra;

																	cout << "You enter into the lair of the Dragon where you try to find the Chalice of Knowledge" << endl;
																	cout << "But then you encounter the red Dragon!!!!!!!!!!!" << endl;
																	cout << "The Dragon is furious that you were able to survive in the Dungeoun" << endl;
																	cout <<	"especially killing all the monsters that he summoned" << endl;
																	cout << "He is currently guarding the Chalice of Knowledge with his own bare hands" << endl;
																	cout << "The Dragon will face you off into a fight til the death" << endl;
																	cout << "Yarra the hero takes out his Spell of the Gods and he's ready for the fight againt the evil and deadly red dragon" << endl;

																	cout << "Now it's your chance, fight the dragon and get the Chalice of Knowledge" << endl;
																	cin >> battle;

																	if (Yarra >= dragon)
																	{
																		cout << "Due to your cunning and experience, you have defeated the deadly dragon. Your quest has ended good sir." << endl;
																		cout << "You've obtained the Chalice of Knowledge and all of Earth's mysteries are revealed" << endl;
																		cout << "YOU WIN" << endl;
																		cout << "THE END" << endl;
																		cout << "Thanks for playing Riders of Fortune" << endl;
																	}
																	else
																	{
																		cout << "Alas, the Dragon's eyes stare at you and places you under his spell. You try to move but fail to do so and find yourself torched by the Dragon's fire." << endl;
																		cout << "If only you had more experience, you could have seen it coming." << endl;
																		cout << "GAME OVER" << endl;
																		cout << "Try again next time" << endl;
																	}
																}
																else
																{
																	XP = &Yarra;
																	Yarra = Yarra + 1;

																	cout << "There is nothing for you to do, so you reflect on your adventure thus far." << endl;
																	cout << "You take the time to train and enhance your reflexes" << endl;
																	cout << "Your XP ranked up to + " << Yarra << endl;
																	
																	cout << "Make your choice: " << endl;
																	cout << "1. Travel to another space to the board" << endl;
																	cout << "2. Dismount and explore the current space" << endl;
																	cin >> i;

																	if (i == 1)
																	{
																		boss = &dragon;

																		XP = &Yarra;

																		cout << "You enter into the lair of the Dragon where you try to find the Chalice of Knowledge" << endl;
																		cout << "But then you encounter the red Dragon!!!!!!!!!!!" << endl;
																		cout << "The Dragon is furious that you were able to survive in the Dungeoun" << endl;
																		cout << "especially killing all the monsters that he summoned" << endl;
																		cout << "He is currently guarding the Chalice of Knowledge with his own bare hands" << endl;
																		cout << "The Dragon will face you off into a fight til the death" << endl;
																		cout << "Yarra the hero takes out his Spell of the Gods and he's ready for the fight againt the evil and deadly red dragon" << endl;

																		cout << "Now it's your chance, fight the dragon and get the Chalice of Knowledge" << endl;
																		cin >> battle;

																		if (Yarra >= dragon)
																		{
																			cout << "Due to your cunning and experience, you have defeated the deadly dragon. Your quest has ended good sir." << endl;
																			cout << "You've obtained the Chalice of Knowledge and all of Earth's mysteries are revealed" << endl;
																			cout << "YOU WIN" << endl;
																			cout << "THE END" << endl;
																			cout << "Thanks for playing Riders of Fortune" << endl;
																		}
																		else
																		{
																			cout << "Alas, the Dragon's eyes stare at you and places you under his spell. You try to move but fail to do so and find yourself torched by the Dragon's fire." << endl;
																			cout << "If only you had more experience, you could have seen it coming." << endl;
																			cout << "GAME OVER" << endl;
																			cout << "Try again next time" << endl;
																		}
																}
																	else
																	{
																		cout << "There is nothing for you to do, so you reflect on your adventure thus far." << endl;
																		cout << "You take the time to train and enhance your reflexes" << endl;
																		cout << "Your XP ranked up to + " << Yarra << endl;
																	}
															}
															
														}
														
															else
															{
																cout << "The Black Serpent snagged you into it's mouth and penetrate venom into your body and you are dead";
																cout << "GAME OVER";
															}
													}
												}
										}


										}
										else
										{
										cout << "The Black Spider wrapped you under it's web and stabbed you with it's legs" << endl;
										cout << "GAME OVER";
										}
								
								}


								
							}

							
						}
								else
								{
								cout << "The Armorsaurus stomped and crushed on you with it's legs and you are dead" << endl;
								cout << "GAME OVER";
								}
						
					}
					
				
				}
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