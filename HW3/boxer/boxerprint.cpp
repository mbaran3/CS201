#include <iostream>


void print(std::string word, int times) {

	for (int i = 0; i < times; i++) {
		std::cout << "\n";
		for (int j = 0; j < word.size()+times*2 + 2; j++) {
			std::cout << "*";
		}
	}

	for (int i = 0; i < 3; i++) {
		std::cout << "\n";
		if (i == 0 || i == 2) {
			for (int j = 0; j < times; j++) {
				std::cout << "*";
			}
			for (int j = 0; j < word.size() + 2; j++) {
				std::cout << " ";
			}
			for (int j = 0; j < times; j++) {
				std::cout << "*";
			}
		}
		else {
			for (int j = 0; j < times; j++) {
				std::cout << "*";
			}

			std::cout << " " << word << " ";

			for (int j = 0; j < times; j++) {
				std::cout << "*";
			}
		}
	}
	for (int i = 0; i < times; i++) {
		std::cout << "\n";
		for (int j = 0; j < word.size() + times * 2 + 2; j++) {
			std::cout << "*";
		}
	}


}