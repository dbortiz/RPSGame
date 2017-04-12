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

class Tool: public Rock{
	public:
		Rock(int r){
			strength = r;
		}
}

class Tool: public Paper{
	public:
		Paper(int p){
			strength = p;
		}

}

class Tool: public Scissors{
	public:
		Scissors(int s){
			strength = s;
		}
}