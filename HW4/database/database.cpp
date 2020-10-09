#include "database.hpp"
#include<iostream>
#include <vector>

std::map<std::string, MyDatabaseRecord> myDatabase;
bool PrintRecord(const std::string& key);
bool CreateRecord(const std::string& key);
int main() {
	bool run = true;
	std::string pointer;  // controls the program
	std::string studentname;
	while (run) {
		std::cout << "Enter 1 to add a name\nEnter 2 to print a students grade\n";
		std::getline(std::cin, pointer);
		switch (pointer[0]) {
		case '1':
			std::cout << "Enter a name\n";
			std::getline(std::cin, studentname);
			CreateRecord(studentname);
			break;

		case '2':
			std::cout << "Enter a name\n";
			std::getline(std::cin, studentname);
			PrintRecord(studentname);
			break;

		}
	}
	return 0;
	}
bool PrintRecord(const std::string& key) {
	auto it = myDatabase.find(key);
	if (it == myDatabase.end())
		return false;
	else
		std::cout << key << "'s grades are\n";
		std::cout << "Math: " << myDatabase[key].MathGrade << "%\n";
		std::cout << "English: " << myDatabase[key].EnglishGrade << "%\n";
		std::cout << "Scince: " << myDatabase[key].ScienceGrade << "%\n";
		std::cout << "History: " << myDatabase[key].HistoryGrade << "%\n";
}
bool CreateRecord(const std::string& key) {
	
		std::string grade;
		std::cout << "Enter " << key << "'s grade in History\n";
		std::getline(std::cin, grade);
		myDatabase[key].HistoryGrade = grade;
		std::cout << "Enter " << key << "'s grade in Math\n";
		std::getline(std::cin, grade);
		myDatabase[key].MathGrade = grade;
		std::cout << "Enter " << key << "'s grade in Science\n";
		std::getline(std::cin, grade);
		myDatabase[key].ScienceGrade = grade;
		std::cout << "Enter " << key << "'s grade in Enligh\n";
		std::getline(std::cin, grade);
		myDatabase[key].EnglishGrade;

		return true;
}
