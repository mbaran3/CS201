/*
*Michael Baran
* September 16 2020
* CS201 HW2
* vectornames.cpp
*/

#include<iostream>
#include<vector>
#include<string>


void inputnames(std::vector<std::string>& names) {
	int size;
	bool error = true;
	do {
		std::cout << "How many names would you like to enter" << std::endl;
		std::cin >> size;

		if (size <= 0) {
			std::cout << "You either did not enter a number or entered a number less then 0" << std::endl;
		}
		else {
			error = false;
		}
	} while (error == true);
	std::cout << "Enter Names With use RETURN to seperate them" << std::endl;
	for (int i = 0; i <= size; i++) {
	std::string Word;
	std::getline(std::cin, Word);
	names.push_back(Word);

	}

}

void printnames(const std::vector<std::string>& names) {

	int size = names.size();
	std::cout << "THIS FUNCTION IS WORKING" << std::endl;
	for (int i = 0; i < size; i++) {

		std::cout << names[i] << std::endl;
	}
}
bool checknames(const std::vector<std::string>& names) {
	std::string checker;
	std::cout << "Enter a Name you would like to check for" << std::endl;
	std::getline(std::cin, checker);
	int size = names.size();
	for (int i = 0; i < size; i++) {
		std::string holder = names[i];
		if (holder == checker) {
			std::cout << "The Name is in the list" << std::endl;
			return true;
		}

	}
	std::cout << "The Name is not in the list" << std::endl;
	return false;

}
int main() {
	std::vector<std::string> names;

	inputnames(names);
	checknames(names);
	printnames(names);

	return 0;
	
}