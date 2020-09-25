#include <iostream>
//converts celsius to kelvin
double ctok(double c) {
	double k = c + 273.15; // this number needs to be double not int
	
	if (k < -273.15)
		return -273.15;

	return k;  // Was 'int' should be k or 'double k = c+273.15

}
int main() {
	double c = 0;
	std::cin >> c; // was cin d
	double k = ctok(c); // "" change c from an int
	std::cout << k << '\n';
}