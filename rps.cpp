#include "rps.h"

using namespace std;

Tool::Tool(){
	int strength = 1;
	char type = 's';
}

Tool::~Tool(){
	cout << "Someone lost." << endl;
}

Rock::Rock(){
	strength = 1;
	type = 'r';
}

Paper::Paper(){
	strength = 1;
	type = 'p';
}

Scissors::Scissors(){
	strength = 1;
	type = 'p';
}


Rock::Rock(int r){
	setStrength(r);
	type = 'r';
}

Paper::Paper(int p){
	setStrength(p);
	type = 'p';
}

Scissors::Scissors(int s){
	setStrength(s);
	type = 's';
}

bool Rock::fight(Tool opponent){
	if (opponent.type == 's'){
		strength *= 2;
	}
	if else(opponent.type == 'p'){
		strength *= 0.5;
	}
	else{
		strength;
	}

	if (strength > p.strength){
		return true;
	}else{
		return false;
	}
}

bool Paper::fight(Tool p){
	if (opponent.type == 'r'){
		strength *= 2;
	}
	if else(opponent.type == 's'){
		strength *= 0.5;
	}
	else{
		strength;
	}

	if (strength > p.strength){
		return true;
	}else{
		return false;
	}
}

bool Scissors::fight(Tool s){
	if (opponent.type == 's'){
		strength *= 2;
	}
	if else(opponent.type == 'r'){
		strength *= 0.5;
	}
	else{
		strength;
	}

	if(strength > s.strength){
		return true;
	}else{
		return false;
	}
	
}

void Tool::setStrength(int s){
	strength = s;
}