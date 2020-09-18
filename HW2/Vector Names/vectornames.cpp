/*
*Michael Baran
* September 16 2020
* CS201 HW2
* vectornames.cpp
*/

#include<iostream>
#include<vector>
#include<string>
#include<time.h>

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

	for (int i = 0; i < size; i++) {

		std::cout << names[i] << std::endl;
	}
}
void scramblenames(std::vector<std::string>& names) {
	srand(time(NULL));
	std::cout << "\nThis is a string randomly generated using each word\n" << std::endl;
	for (int i = 0; i < names.size(); i++) {
		std::string name = names[i];
		int size = name.size();
		std::cout << name << " Becomes" << std::endl;
		for (int j = 0; j< size; ++j) {
			int random = rand() % size;
			char hold = name[random];
			
			std::string holder(1, hold);
			name.insert(j, holder);
			name.pop_back();
			
		}
		std::cout << name << std::endl;
	}
	return;
}
bool checknames(const std::vector<std::string>& names) {
	std::string checker;
	std::cout << "\nEnter a Name you would like to check for\n" << std::endl;
	std::getline(std::cin, checker);
	int size = names.size();
	for (int i = 0; i < size; i++) {
		std::string holder = names[i];
		if (holder == checker) {
			std::cout << "\nThe word "<< checker <<" is in the list" << std::endl;
			return true;
		}

	}
	std::cout << "\nThe Word" << checker << " is not in the list" << std::endl;
	return false;

}
int main() {
	std::vector<std::string> names;
	inputnames(names);
	checknames(names);
	printnames(names);
	scramblenames(names);

	return 0;

}
