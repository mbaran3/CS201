#include <iostream>
#include <math.h>


bool ispositive(double a, double b, double c){

	double check = pow(b, 2) - 4 * a * c;
	if (0 > check)
		return true;
	return false;
}
int main() {

	double a, b, c, sqt;
	std::cout << "This will solve the quadratic equation" << std::endl;
	std::cout << "\n Please enter a" << std::endl;
	std::cin >> a;
	std::cout << "Please enter b" << std::endl;
	std::cin >> b;
	std::cout << "Please enter c" << std::endl;
	std::cin >> c;

	if (ispositive(a, b, c)) {
		std::cout << "No real numbers"; 
		return 0;
	}
		
		
	sqt = sqrt(pow(b, 2) - 4 * a * c);
	double result1 = (-b + sqt )/ (2 * a);
	double result2 = (-b - sqt )/ (2 * a);
	std::cout << result1 << " " << result2 << std::endl;

	return 0;
}