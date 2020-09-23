#include <iostream>

int main() {
	int num;
	bool posnum = false; 
	while (posnum == false) {
		std::cout << "Enter a positive number " << std::endl;
		std::cin >> num;
		if (num > 0) {
			posnum = true;
		}
	}


	std::cout << num << " ";
	while (num != 1) {

		if (num % 2 == 0) {
			num = num / 2;
		}
		else {
			num = 3 * num + 1;
		}
		std::cout << num << " ";
	}
}
