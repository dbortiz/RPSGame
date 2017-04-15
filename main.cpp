// Dan Ortiz
// CPSC 121-01
// This program determines the winner in a Rock, Paper, Scissors game... with a "twist".
// The programmer inputs a strength level into the object's constructor and the program
// chooses the winner based on the strength level between two objects (ex. Rock v. Paper).
#include <iostream>
#include "rps.h"

using namespace std;

int main(){
	// Declared and initialized object for Tool, Rock, Paper, and Scissors
	Tool t;
	Rock r(3);
	Paper p(4);
	Scissors s(5);

	// if-else statement to determine the winner between rock vs scissors
	if (r.fight(s) == true){
		cout << "Rock wins!" << endl;
	}else{
		cout << "Scissors wins!" << endl;
	}

	// if-else statement to determine the winner between rock vs paper
	if (r.fight(p) == true) {
		cout << "Rock wins!" << endl;
	}else{
		cout << "Paper wins!" << endl;
	}

	// if-else statement to determine the winner between paper vs rock
	if (p.fight(r) == true){
		cout << "Paper wins!" << endl;
	}else{
		cout << "Rock wins!" << endl;
	}

	// if-else statement to determine the winner between paper vs scissors
	if (p.fight(s) == true) {
		cout << "Paper wins!" << endl;
	}else{
		cout << "Scissors wins!" << endl;
	}

	// if-else statement to determine the winner between scissors vs rock
	if (s.fight(r) == true){
		cout << "Scissors wins!" << endl;
	}else{
		cout << "Rock wins!" << endl;
	}

	// if-else statement to determine the winner between scissors vs paper
	if (s.fight(p) == true){
		cout << "Scissors wins!" << endl;
	}else{
		cout << "Paper wins!" << endl;
	}

	return 0;
}