#include "rps.h"

using namespace std;

Tool::Tool(){
	int strength = 1;
	char type = 's';
}

Tool::~Tool(){
	cout << "Someone lost." << endl;
}

void Tool::setStrength(int s){
	strength = s;
}