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
bool checknames(const std::vector<std::string>& names, std::string checker) {

	int size = names.size();
	for (int i = 0; i < size; i++) {
		std::string holder = names[i];
		if (holder == checker) {
			return true;
		}

	}
	return false;

}
int main() {

	std::vector<std::string> names;
	bool run = true;
	while (run = true) {

		int selection;

		std::cout << "Press 1 to input names" << std::endl;
		std::cout << "Press 2 to check  for a name" << std::endl;
		std::cout << "Press 3 to print the names" << std::endl;
		std::cout << "Press 4 to scramble the names" << std::endl;
		std::cout << "Press 0 to exit the program" << std::endl;
		std::cin >> selection;

		if (selection == 1) {
			inputnames(names);
		}
		if (selection == 2) {
		std::cin.ignore(1024, '\n');
		std::string checker;
		std::cout << "\nEnter a Name you would like to check for\n" << std::endl;
		std::getline(std::cin, checker);
			if (checknames(names, checker) == true) {
				std::cout << checker << "\n is in the list of names \n" << std::endl;
			}
			else {
				std::cout << checker << "\n is not in the list of names \n" << std::endl;
			}
		}
		if (selection == 3) {
			printnames(names);
		}
		if (selection == 4) {
			scramblenames(names);
		}
		if (selection == 0) {
			return 0;
		}
		if (selection >= 4 || selection < 0) {
			std::cout << "Please only enter a number between 0 and 4" << std::endl;
		}


	}



}
