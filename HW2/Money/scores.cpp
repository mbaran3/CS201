/*
* Michael Baran
* September 17
* scores.cpp
* CS201 HW2
*/
#include <iostream>
#include <vector>
#include <string>


void print(std::vector<int> scores, std::vector<std::string> names){
	std::cout << "The score are" << std::endl;
	for (int i = 0; i < names.size(); i++) {

		std::cout << scores[i]<< " " << names[i] << std::endl;
	}
}
void inputscore(std::vector<int>& scores, std::vector<std::string>& names) {
	bool run = true;
	std::cin.ignore(1024, '\n');
	while (run == true) {
		bool repeat = false;
		std::string name;
		int num;
		std::cout << "Enter a name" << std::endl;
		std::getline(std::cin, name);
		for (int i = 0; i < names.size(); i++) {
			if (name == names[i]) {
				std::cout << "Name is already in the list" << std::endl;
				repeat = true;

			}
		}
		if (name == "0") {
			return;
		}
		if(repeat == false){
			names.push_back(name);
			std::cout << "Enter " << name << "'s score" << std::endl;
			std::cin >> num;
			std::cin.ignore(1024, '\n');
			scores.push_back(num);
		}
	}
}
void searchscores(std::vector<std::string> names, std::vector<int>scores, int search) {
	
	for (int i = 0; i < scores.size(); i++) {
		if (scores[i] == search) {
			std::cout << names[i] << " has a score of " << search << std::endl;
		}
	}
	
}
int searchnames(std::vector<std::string> names, std::string search) {
	
	for (int i = 0; i < names.size(); i++) {
		if (names[i] == search) {
			return i;
		}
	}
	return -1;

}
int main() {
	std::vector<int> scores = { 32, 32, 32, 32 };
	std::vector<std::string> names = { "Michael", "Jason", "Michelle", "Willow" };
	int num;
	bool run = true;
	while (run == true) {

		std::cout << "Press 1 to add scores" << std::endl;
		std::cout << "Press 2 to see scores" << std::endl;
		std::cout << "Press 3 to search for a name" << std::endl;
		std::cout << "Press 4 to search for a score" << std::endl;
		std::cout << "Press 0 to end the program" << std::endl;
		std::cin >> num;
		if (num == 1) {
		inputscore(scores, names);
		}
		if (num == 2) {
		print(scores, names);
		}
		if (num == 3) {
			std::cin.ignore(1024, '\n');
			std::string search;
			std::cout << "Enter a name to search for" << std::endl;
			std::getline(std::cin, search);
			int place = searchnames(names, search); //stores where the name is found
			if (place != -1) {
				std::cout << search << "\n Holds the score of \n" << scores[place] << std::endl;
			}
			else {
				std::cout << search << "\n Is not found in the list of names " << std::endl;
			}
		
		}
		if (num == 4) {
			int search;
			std::cout << "Enter a score you want to search for" << std::endl;
			std::cin >> search;
			searchscores(names, scores, search); 
		}
		if (num == 0) {
			run = false;
		}
		if (num > 4 || num < 0) {
			std::cout << "You failed to enter a number 0-4" << std::endl;
		}
	}

	return 0;
}	