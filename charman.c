/*
Caleb Alkire
7/29/17
dnd.c
This program will hold an arbitrary amount of character for DnD (pathfinder system to start). It will serve as a character manager, and allow leveling up in a simple fashion.
*/

#include <iostream>
#include <fstream>

using namespace std;

//Character Information Class [These are all things that are just intrinsic to the character, and should be cross-version, and are all decided by the player]
class char_info {

 public:
	char name[50], age[5], hair[10], eyes[10], deity[10], alignment[20], gender[10];
	int gametype_var, hft, hin, weight, size_var; //Note: hft stands for height-ft and hin stands for height-in
	int Str, Dex, Con, Int, Wis, Cha; //Stats

 private:

};

//Character Attribute Class [These are things that are likely racial, and will need to be altered based on race and class] (Pathfinder)
class char_attr {

};

int main()
{
	cout<<"Welcome to cmalkire's Dungeons & Dragons Character manager!\nPress Enter to begin...";
	cin.get();
	cout<<"I'm sorry, this program isn't exactly ready yet, and you're not able to view all the neat features that I'm going to put in. I'll print a changelog in future updates.\nFor now, sit tight! and check back later!\n";
}
