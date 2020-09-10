/*
dotcross.cpp
Michael Baran
10 Sept 2020
HW1 for CS 201
*/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main() {

	float arr1[3];
	float arr2[3];
	float cross[3];

	cout << "Enter 3 numbers for vector 1" << endl;
		cout << "Enter a X value" << endl;
		cin >> arr1[0];
		cout << "Enter a Y value" << endl;
		cin >> arr1[1];
		cout << "Enter a Z value" << endl;
		cin >> arr1[2];
	

	cout << "Please enter 3 number for vector 2" << endl;
		cout << "Enter a X value" << endl;
		cin >> arr2[0];
		cout << "Enter a Y value" << endl;
		cin >> arr2[1];
		cout << "Enter a Z value" << endl;
		cin >> arr2[2];
		float holder = 0;
		for (int i = 0; i <= 2; i++) {
			holder = holder + arr1[i] * arr2[i];
		}
		cout << std::fixed << std::setprecision(5);
		cout << "Dot Product = " << std::fixed << std::setprecision(5) << holder << endl;

		cross[0] = arr1[1] * arr2[2] - arr1[2] * arr2[1];
		cross[1] = arr1[2] * arr2[0] - arr1[0] * arr2[2];
		cross[2] = arr1[0] * arr2[1] - arr1[1] * arr2[0];

		cout << "Cross Product = {" << std::fixed << std::setprecision(5) << cross[0] << ", ";
		cout<< cross[1] << ", " << cross[2] << " }";
			
		return 0;
}