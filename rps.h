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
		Tool(char r);
}

class Tool: public Paper{
	public:
		Tool(char p);

}

class Tool: public Rock{
	public:
		Tool(char r);
}