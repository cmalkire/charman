/*
Caleb Alkire
7/29/17
dnd.c
This program will hold an arbitrary amount of character for DnD (pathfinder system to start). It will serve as a character manager, and allow leveling up in a simple fashion
*/

#include <iostream>
#include <fstream>

using namespace.std;

//Base Class
class char_info {

 public:
	char name[50];
	int gametype_var;
	char age[5];
 private:

}

//Attributes will go in here (Armor Class, hp, stats, movement, etc)
class char_attributes: public char_info {

}

int main()
{

}
