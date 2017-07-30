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
	char name[50], hair[10], eyes[10], deity[10], alignment[20], gender[10], race[10]; //Basic Character information, really only a few of these will be referenced
	int gametype_var, hft, hin, weight, size_var, age; //Note: hft stands for height-ft and hin stands for height-in
	int Str, Dex, Con, Int, Wis, Cha; //Stats
 //This will hold all the functions that will alter character data
 public:
	void create_char();
	void alter_char();
	void level_char();
	void show_char();
	void list_chars();
};

//Function Definitions [This is what each of the functions in char_info will perform]

void char_info::create_char() {
	int x=0;
	system("cls");
	cout<<"New character creation menu, please follow the directions to setup your new character:\n";
	while (x == 0) {
		cout<<"Please enter their name: ";
		cin.getline(name,50);
		system("cls");
		cout<<"Please enter their race: ";
		cin>>race;
		system("cls")
		cout<<"Please enter their gender: ";
		cin>>gender;
		system("cls");
		cout<<"Please enter their age: ";
		cin>>age;
		system("cls");
		cout<<"Please enter their height in feet: ";
		cin>>hft;
		cout<<"Please enter their height in inches ";
		cin>>hin;
		system("cls");
		cout<<"Please enter their hair color: ";
		cin>>hair;
		system("cls")
		cout<<"Please enter their alignment: ";
		cin.getline(alignment,20);
		system("cls");
 }

int main() 
{
	cout<<"Welcome to cmalkire's Character Manager!\nPress Enter to continue...\n";
	cin.get();
	cout<<"This program will help manage characters in the pathfinder system. At the moment, there's nothing here. Sorry about that.\n";
}
