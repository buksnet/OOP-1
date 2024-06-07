#include <iostream>
#include "Progression.h"
using namespace std;


int main() {
	Progression prog = make_progression(1.563, 2);
	prog.show();
	cout << endl <<"Value of the 7th element of the progression: " << prog.element(7) << endl;
	return 0;
}
