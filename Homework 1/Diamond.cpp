/*
Diamond.cpp
Michael Baran
10 Sept 2020
HW1 for CS 201
*/
#include <iostream>

using std::endl;
using std::cout;
using std::cin;


int main() {
	int n;
	bool error = true;

	cout << "Please Enter a Number " << endl;
	cin >> n;

	while (error == true) {  //Check user input for error

		if (n <= 0) {
		cout << "Please Enter a Postive non 0 number " << endl;
		cin >> n;
		}
		if (n > 0) {
		error = false;
		}
	}

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
