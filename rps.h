// This header file declares and initializes the classes: Tool, Rock, Paper, and Scissors.
#ifndef RPS_H
#define RPS_H

#include <iostream>

using namespace std;

// Tool class with variables, constructor, and setStrength method
class Tool{
	protected:
		int strength;
		char type;		
	public:
		Tool();
		Tool(int, char);
		int getStrength();
		void setStrength(int);
		char getType();
		void setType(char);
};

// Rock class with constructors and fight method
class Rock: public Tool{
	public:
		Rock();
		Rock(int);
		bool fight(Tool);
};

// Paper class with constructors and fight method
class Paper: public Tool{
	public:
		Paper();
		Paper(int);
		bool fight(Tool);
};

// Scissors class with constructors and fight method
class Scissors: public Tool{
	public:
		Scissors();
		Scissors(int);
		bool fight(Tool);
};

// Prototype to check the winner
void checkWinner(bool, Tool, Tool);
#endif