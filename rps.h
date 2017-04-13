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
		Rock(int r){
			setStrength(r);
		}
		bool fight(Tool);
};

class Paper: public Tool{
	public:
		Paper(int p){
			setStrength(p);
		}
		bool fight(Tool);
};

class Scissors: public Tool{
	public:
		Scissors(int s){
			setStrength(s);
		}
		bool fight(Tool);
};