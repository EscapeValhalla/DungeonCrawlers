// DungeonCrawler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
//#include "stdafx.h"
using namespace std;


//Dungeon map based in both char and bool


const int axis_y =10;
const int axis_x =10;

char dungeon[axis_x][axis_y]= {
{'O','O','O','O','O','O','O','O','O','O'},
{'O','O','DE','O','O','O','DE','O','O','O'},
{'O','O','P','O','P','P','P','BB','P5B','O'},
{'O','O','P','O','P','O','P','O','P','O'},
{'O','O','P','O','P','O','P','O','P','O'},
{'O','O','P','O','P','O','P','P','P','O'},
{'O','O','P','P','P','O','O','P','O','O'},
{'O','O','DE','O','D','S','O','P','O','O'},
{'O','O','O','O','O','O','O','E','O','O'} };


bool dungeon[axis_x][axis_y]= {
{ false, false, false, false, false, false, false, false, false, false, },
{ false, false, true, false, false, false,   true, false, false, false, },
{ false, false, false, false, false, false, false, false, false, false, },
{ false, true, false, false, false, false, true,  false, false, false, },
{ false, false, false, false, false, false, false, false, false, false, },
{ false, false, false, false, false, false, false, false, false, false, },
{ false, false, false, false, false, false, false,  true, false, false, },
{ false, false, false,  true, false, false, false, false, false, false, },
{ false, false, false, false,  true, false, false, false, false, false, },
{ false, false, false, false, false, false, false, false, false, false, }, };



int main()
//introduction to the game welcoms player and askes if they want to play 
cout <<  "\\Welcome Paladin you have traveled far from the Cathedrals of Dewlight, do you accept the quest to locate the Grail of Benevolence? \n Yes = 1\n No = 2\n";
cin >> Quest;
if (Quest == 1)
{
	//begins quest not sure how to do this yet will finish a fter game is playable 
}
else if (Quest == 2)
{
	cout << "It saddens my heart that you have denied my request, fare thee well Paladin." ;
}
else
{
	cout << "That is not a choice Paladin\n\n";
	return main();
}

//Direction commands for the playable character includes (P)path, (DE)dead end
{
	cout << "Your current X coordinate is: " << X << "." << endl;
	cout << "Your current Y coordinate is " << Y << "." << endl;
	char currentSpaceType = dungeon[Y][X];
	switch (currentSpaceType) {
	case 'P':
		cout << "You walk deeper into the dungeon..." << endl;
		break;
	case 'DE':
		cout << "Three walls surround you with the corridor at your back." << endl;
		break;
	case 'BB':
		if  class paladin int hp = 1 - 5
			cout << "The bridge gives way under your weight, you dive backwards just in time!!" << endl;
		else if class paladin int hp = 0
			cout << "The bridge gives way under your weight, You plummet into the blackness below..." << endl;
		cout << "You Have Died Paladin." << endl;
		break;
	case 'PB':
		cout << "The path opens to the right showing a precarious bridge, over yonder you see a Goblin guarding the path." << endl;
		break;
	case 'B':
		cout << "'You charge at the leader ready to attack'" "You DARE to challange ME?! - Goblin Chieftain" << endl;
		break;

	default:
		cout << "You're walking through a wall! Are you a ghost too?" << endl;
		break;
		return main();
	}
}








//Paladin rules
class paladin {


	int level, attack;

public:
	int hp, gold;
	 paladin int {
	level = 1;
	attack = 2;
	hp = 5;
	gold = 0, },

};


//Goblin (warrior) rules
class goblinw {


	int level, attack;

public:
	int hp,level, attack;
	goblinw int{
    level = 2;
   attack = 1;
   hp = 3;
   gold = 0, },

};


//Goblin (marauder) rules
class goblinm {


	int level, attack;

public:
	int hp, level, attack;
	goblinm int{
   level = 4;
   attack = 1;
   hp = 5;
   gold = 0, },

};


//Goblin (chieftain) rules
class goblinc {


	int level, attack;

public:
	int hp, level, attack;
	goblinc int{
   level = 7;
   attack = 2;
   hp = 8;
   gold = 0, },





};

//battle mechanics
//void battle();
//int showEnemyHp(int enemyhp, int attack);
//int showHp(int hp, int enemyattack);

// critical damage rand genorator using a rand denerator  {
//srand(static_cast<unsigned int> (time(0)));


cout << randcapacity[rand() % 6] << endl;

//Paladin movment code
void movePlayer(char whereNext)
{
	// L = same row, X - 1
	// R = same row, X + 1
	// U = Y - 1, same column. Up the screen = down the array.
	// D = Y + 1, same column Down the screen = up the array.
	switch (whereNext) {
	case 'U':
		player_next_Y = player_Y - 1;
		if ((player_next_Y >= 0) && (player_next_Y < grid_Y))
			player_Y = player_next_Y;
		else
			cout << "Move not possible!" << endl;
		printCurrentCoordinates(player_X, player_Y);
		printHauntStatus(player_X, player_Y);
		break;
	case 'D':
		player_next_Y = player_Y + 1;
		if ((player_next_Y >= 0) && (player_next_Y < grid_Y))
			player_Y = player_next_Y;
		else
			cout << "Move not possible!" << endl;
		printCurrentCoordinates(player_X, player_Y);
		printHauntStatus(player_X, player_Y);
		break;
	case 'L':
		player_next_X = player_X - 1;
		if ((player_next_X >= 0) && (player_next_X < grid_X))
			player_X = player_next_X;
		else
			cout << "Move not possible!" << endl;
		printCurrentCoordinates(player_X, player_Y);
		printHauntStatus(player_X, player_Y);
		break;
	case 'R':
		player_next_X = player_X + 1;
		if ((player_next_X >= 0) && (player_next_X < grid_X))
			player_X = player_next_X;
		else
			cout << "Move not possible!" << endl;
		printCurrentCoordinates(player_X, player_Y);
		printHauntStatus(player_X, player_Y);
		break;
	default:
		cout << "Can't calculate next location" << endl;
		break;
	}