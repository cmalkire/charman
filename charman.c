/*
Caleb Alkire
7/29/17
dnd.c
This program will hold an arbitrary amount of character for DnD (pathfinder system to start). It will serve as a character manager, and allow leveling up in a simple fashion.
*/

#include <iostream>
#include <fstream>

using namespace.std;

//Base Class [These are all things that are just intrinsic to the character, and should be cross-version]
class char_info {

 public:
	char name[50], age[5], hair[10], eyes[10], deity[10];
	int gametype_var, hft, hin, weight; //Note: hft stands for height-ft and hin stands for height-in

 private:

}

//Attribute Class [These are more numerical things, such as Stats, movement, etc...] (Pathfinder)
class attr_path: public char_info {

}

int main()
{

}
