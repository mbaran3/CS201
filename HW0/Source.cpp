#include <iostream>
using namespace std;


int main() {
	int z;
	cout << "Enter 1 for Hello Wolrd. \nEnter 2 for a poem. \nEnter 3 for my poem \n";
		cin >> z;
		if (z == 1) {
			int a;
			cout << "How many time would you like to pint Hellow Wolrd?\n";
			cin >> a;
			for (int i = 0; i < a; i++) {
				cout << "Hello, Wolrd \n";
			}

	}
		if (z == 2) {
			cout << "'A World of Dew' by Kobayshi Issa " << endl;
			cout << "A world of dew,\nAnd within every dewdrop,\nA world of struggle." << endl;
		}

		if (z == 3) {
			cout << "Works" << endl;
		}

		cout << "Press ENTER to quit";
	return 0;
}
