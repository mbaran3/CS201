#include <iostream>
using namespace std;
#include <iostream>
using namespace std;


int main() {
	int z;
	int f = 0;
	while (f == 0) {
	cout << "Enter 1 for Hello Wolrd. \nEnter 2 for a description of a game. \nEnter 3 for my poem \nEnter 4 to close the program\n";
	cin >> z;
	
		if (z == 1) {
		for(int i = 0; i < 5; i++) {
			cout << "Hello, World\n";
		}
		}
		if (z == 2) {
		cout << "'A World of Dew' by Kobayshi Issa " << endl;
		cout << "A world of dew,\nAnd within every dewdrop,\nA world of struggle." << endl;
		}

	if (z == 3) {
		cout << "The award-winning online typing competition,TypeRacer, allows people to reach each-other";
		cout << "by typing qoutes from\n books, movies, and songs. I is the first multiplayer typing game on the";
		cout << "web.\n" << endl;

		}
	if (z == 4) {
		break;
	}
	
	}
	cout << "Press ENTER to quit";
	return 0;
}
