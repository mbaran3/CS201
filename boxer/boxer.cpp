#include <iostream>
#include <string>
#include "boxer.hpp"

int main() {
	std::string word;
	int times;

	std::cout << "Plase enter a word" << std::endl;
	std::getline(std::cin, word);
	std::cout << "Please enter a number" << std::endl;
	std::cin >> times;
	print(word, times);

	return 0;
}