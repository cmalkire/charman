/*
Caleb Alkire
7/29/17
dnd.c
This program will hold an arbitrary amount of character for DnD (pathfinder system to start). It will serve as a character manager, and allow leveling up in a simple fashion.
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cctype>
#include <stdlib.h>
#include <string>

using namespace std;

//Character Information Class [These are all things that are just intrinsic to the character, and should be cross-version, and are all decided by the player]
class char_info {

	char /*name[50],*/ hair[10], eyes[10], diety[20], alignment[20], gender[10], race[10]; //Basic Character information, really only a few of these will be referenced
	int gametype_var, hft, hin, weight, size_var, age; //Note: hft stands for height-ft and hin stands for height-in
	int Str, Dex, Con, Int, Wis, Cha; //Stats
 //This will hold all the functions that will alter character data
 public:

	char name[50];
	void create_char();
	void alter_char();
	void level_char();
	void show_char();
	void list_chars();
};

//Function Definitions [This is what each of the functions in char_info will perform]

void char_info::create_char() {
	int x, y, z;
	x=2;
	y=0;
	z=0;
	system("clear");
	cout<<"New character creation menu, please follow the directions to setup your new character:\n";

	//This while loop will edit a charachter's basic data.
	while (x == 2) {
		cout<<"Please enter their name: ";
		cin.getline(name,50);
		system("clear");
		cout<<"Please enter their race: ";
		cin>>race;
		system("clear");
		cout<<"Please enter their alignment: ";
		cin.ignore();
		cin.getline(alignment,20);
		system("clear");
		cout<<"Please enter their gender: ";
		cin>>gender;
		system("clear");
		cout<<"Please enter their age: ";
		cin>>age;
		system("clear");
		cout<<"Please enter their height in feet: ";
		cin>>hft;
		cout<<"Please enter their height in inches: ";
		cin>>hin;
		system("clear");
		cout<<"Please enter their hair color: ";
		cin>>hair;
		system("clear");
		cout<<"Please enter their eye color: ";
		cin>>eyes;
		system("clear");
		cout<<"Please enter their deity: ";
		cin.ignore();
		cin.getline(diety,20);
		system("clear");

		//This while loop sets all the numerical attributes for the charachter
		while (y == 0){
			cout<<"Please enter their attributes\n";

			if(z == 0){
				cout<<"STR: ";
				cin>>Str;
				system("clear");
				z=1;
			}

			else if(z == 1){
				cout<<"DEX: ";
				cin>>Dex;
				system("clear");
				z=2;
			}

			else if(z ==2 ){
				cout<<"CON: ";
				cin>>Con;
				system("clear");
				z=3;

			}

			else if(z == 3){
				cout<<"INT: ";
				cin>>Int;
				system("clear");
				z=4;
			}

			else if(z == 4){
				cout<<"WIS: ";
				cin>>Wis;
				system("clear");
				z=5;
			}

			else if(z == 5){
				cout<<"CHA: ";
				cin>>Cha;
				system("clear");
				z=0;
				y=1;
			}
		}
		y=0;
		cout<<"Here are your charachter's details, please make sure they are correct (you will be able to change it later).\n";
		cout<<"Name: "<<name<<"\nRace: "<<race<<"\nGender: "<<gender<<"\nAge: "<<age<<"\nAlignmennt: "<<alignment<<"\nHair Color: "<<hair<<"\nEye Color: "<<eyes<<"\nHeight: "<<hft<<"ft "<<hin<<"in\nDiety: "<<diety<<"\n";
		cout<<"STR: "<<Str<<"\nDEX: "<<Dex<<"\nCON: "<<Con<<"\nINT: "<<Int<<"\nWIS: "<<Wis<<"\nCHA: "<<Cha<<endl;
		cout<<"\n Do these look correct? If not, select 'NO' and you will be allowed to try again.\n";
		cout<<"1-YES\n2-NO\n";
		cin>>x;
		cin.ignore();
		system("clear");

	}
 }

//Define functions to be used later
void write_char();
int main()
{
	//Work with class definitions in functions in the future, that way multiple classes can be defined
	cout<<"Welcome to cmalkire's Character Manager!\nPress Enter to continue...\n";
	cin.get();
	write_char();
	cout<<"This program will help manage characters in the pathfinder system. At the moment, there's nothing here. Sorry about that.\n";
}


//External functions go here, as a note, write your class calls here, and not in main
void write_char()
{
	char filename;
	char_info char_n;
	char_n.create_char();
	filename = char_info::name;
	ofstream outFile;
	outFile.open(filename,ios::binary|ios::app);
	outFile.write(reinterpret_cast<char *> (&char_n), sizeof(char_info));
	outFile.close();
}
