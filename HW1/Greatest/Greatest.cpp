/*
Greatest.cpp
Michael Baran
10 Sept 2020
HW1 for CS 201
*/
#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	cout << "Enter a positive sequnce of numbers ending with 0" << endl;
	cout << "The program will print the largest number" << endl;
	int greatest = 0;
	int n = 1;
	while (n != 0) {
		cin >> n;
		cout << endl;
		if (n > greatest) {
			greatest = n;
		}
	}
	cout << greatest << endl;
	return 0;
}
