#include <iostream>

using namespace std;

class Tool{
	public:
		int strength;
		char type;
		Tool();
		~Tool();
		void setStrength(int);
};

class Rock: public Tool{
	public:
		Rock();
		Rock(int);
		bool fight(Tool);
};

class Paper: public Tool{
	public:
		Paper();
		Paper(int);
		bool fight(Tool);
};

class Scissors: public Tool{
	public:
		Scissors();
		Scissors(int);
		bool fight(Tool);
};