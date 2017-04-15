#include <iostream>
#include "rps.h"

using namespace std;

int main(){
	Tool t;
	Rock r(3);
	Paper p(4);
	Scissors s(5);

	cout << r.strength << endl;
	cout << r.type << endl;
	cout << p.strength << endl;
	cout << p.type << endl;
	cout << s.strength << endl;
	cout << s.type << endl;

	return 0;
}