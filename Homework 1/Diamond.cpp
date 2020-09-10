/*
HW0.cpp
Michael Baran
2 Sept 2020
HW0 for CS 201
*/
#include <iostream>

using std::endl;
using std::cout;
using std::cin;

int main() {
	int n = 5;
	int space = n - 1;
	
	for (int i = 0; i < n; i++) {
		
		for (int j = 0; j < space; j++) {
			cout << " ";

		}
		for (int k = 0; k <= i; k++) {
				cout << "# ";
		}
		
		cout << endl;
		space--;
	}
	space = 0;
	for (int i = n-1; i > 0; i--) {
		
		for(int j =0; j < space; j++) {
			cout << " ";
		}
		for (int k = 0; k < i; k++) {
			cout << " #";
		}
		cout << endl;
		space++;

	}
	return 0;
}
