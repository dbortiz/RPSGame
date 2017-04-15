#include "rps.h"

using namespace std;

Tool::Tool(){
	int strength = 1;
	char type = 's';
}

Tool::~Tool(){
	cout << "Someone lost." << endl;
}

Rock::Rock(int r){
	setStrength(r);
}

Paper::Paper(int p){
	setStrength(p);
}

Scissors::Scissors(int s){
	setStrength(s);
}

bool Rock::fight(Tool r){
	if (r.strength == strength){
		return true;
	}else{
		return false;
	}
}

bool Paper::fight(Tool p){
	if (p.strength == strength){
		return true;
	}else{
		return false;
	}
}

bool Scissors::fight(Tool s){
	if(s.strength == strength){
		return true;
	}else{
		return false;
	}
	
}

void Tool::setStrength(int s){
	strength = s;
}