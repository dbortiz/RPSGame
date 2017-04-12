#include <iostream>

using namespace std;

class Tool{
	private:
		int strength;
		char type;
	public:
		Tool();
		~Tool();
		void setStrength(int);
};

class Rock: public Tool{
	public:
		Rock(int r){
			strength = r;
		}
		bool fight(Tool);
};

class Paper: public Tool{
	public:
		Paper(int p){
			strength = p;
		}
		bool fight(Tool);
};

class Scissors: public Tool{
	public:
		Scissors(int s){
			strength = s;
		}
		bool fight(Tool);
};