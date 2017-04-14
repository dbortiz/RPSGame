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
		Rock(int);
		bool fight(Tool);
};

class Paper: public Tool{
	public:
		Paper(int);
		bool fight(Tool);
};

class Scissors: public Tool{
	public:
		Scissors(int);
		bool fight(Tool);
};