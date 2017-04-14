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
	strength = r;
}

Paper::Paper(int p){
	strength = p;
}

Scissors::Scissors(int s){
	strength = s;
}

void Tool::setStrength(int s){
	strength = s;
}