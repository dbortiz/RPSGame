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

	// Rock vs. Scissors
	checkWinner(r.fight(s), r, s);

	// Rock vs. Paper
	checkWinner(r.fight(p), r, p);

	// Paper vs. Rock
	checkWinner(p.fight(r), p, r);

	// Paper vs. Scissors
	checkWinner(p.fight(s), p, s);

	// Scissors vs. Rock
	checkWinner(s.fight(r), s, r);

	// Scissors vs. Paper
	checkWinner(s.fight(p), s, p);

	return 0;
}