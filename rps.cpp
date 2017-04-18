//This program initializes the classes' constructors and methods.
#include "rps.h"

using namespace std;
// Initialized default Tool constructor
Tool::Tool(){
	int strength = 1;
	char type = 's';
}

Tool::Tool(int newStrength, char newType){
	strength = newStrength;
	type = newType;
}

// Initialized default Rock constructor
Rock::Rock(){
	strength = 1;
	type = 'r';
}

// Initialized default Paper constructor
Paper::Paper(){
	strength = 1;
	type = 'p';
}

// Initialized default Scissors constructor
Scissors::Scissors(){
	strength = 1;
	type = 'p';
}

// Initialized Rock constructor
Rock::Rock(int r){
	setStrength(r);
	type = 'r';
}

// Initialized Paper constructor
Paper::Paper(int p){
	setStrength(p);
	type = 'p';
}

// Initialized Scissors constructor
Scissors::Scissors(int s){
	setStrength(s);
	type = 's';
}


// Initialized fight method for Rock class
bool Rock::fight(Tool opponent){
	if (opponent.type == 's'){
		strength *= 2;
	}
	else if (opponent.type == 'p'){
		strength *= 0.5;
	}
	else{
		strength;
	}

	if (strength > opponent.strength){
		return true;
	}else{
		return false;
	}
}

// Initialized fight method for Paper class
bool Paper::fight(Tool opponent){
	if (opponent.type == 'r'){
		strength *= 2;
	}
	else if (opponent.type == 's'){
		strength *= 0.5;
	}
	else{
		strength;
	}

	if (strength > opponent.strength){
		return true;
	}else{
		return false;
	}
}
// Initialized fight method for Scissors class
bool Scissors::fight(Tool opponent){
	if (opponent.type == 's'){
		strength *= 2;
	}
	else if (opponent.type == 'r'){
		strength *= 0.5;
	}
	else{
		strength;
	}

	if(strength > opponent.strength){
		return true;
	}else{
		return false;
	}
	
}

// Initialized setStrength method in Tool class
void Tool::setStrength(int s){
	strength = s;
}

// Function to check who won between two objects (Rock, Paper, or Scissors)
void checkWinner(bool win, Tool a, Tool b){
	if (win == true){
		switch (a.type){
			case 'r' :
				cout << "Rock wins!" << endl;
				break;
			case 'p' :
				cout << "Paper wins!" << endl;
				break;
			case 's' :
				cout << "Scissors wins!" << endl;
				break;
			default :
				cout << "Something went wrong" << endl;
		}
	}else{
		switch (b.type){
			case 'r' :
				cout << "Rock wins!" << endl;
				break;
			case 'p' :
				cout << "Paper wins!" << endl;
				break;
			case 's' :
				cout << "Scissors wins!" << endl;
				break;
			default :
				cout << "Something went wrong" << endl;
		}
	}
}