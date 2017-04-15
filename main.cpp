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

	if (r.fight(s) == true){
		cout << "Rock wins!" << endl;
	}else{
		cout << "Scissors wins!" << endl;
	}
	if (r.fight(p) == true) {
		cout << "Rock wins!" << endl;
	}else{
		cout << "Paper wins!" << endl;
	}

	if (p.fight(r) == true){
		cout << "Paper wins!" << endl;
	}else{
		cout << "Rock wins!" << endl;
	}
	if (p.fight(s) == true) {
		cout << "Paper wins!" << endl;
	}else{
		cout << "Scissors wins!" << endl;
	}

	if (s.fight(r) == true){
		cout << "Paper wins!" << endl;
	}else{
		cout << "Rock wins!" << endl;
	}
	if (s.fight(p) == true){
		cout << "Scissors wins!" << endl;
	}else{
		cout << "Paper wins!" << endl;
	}
	return 0;
}