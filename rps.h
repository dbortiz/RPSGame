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