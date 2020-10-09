#include "database.hpp"
#include<iostream>
#include <vector>

std::map<std::string, MyDatabaseRecord> myDatabase;
bool PrintRecord(const std::string& key);
bool CreateRecord(const std::string& key);
int main() {

	std::string studentname;
	std::cout << "Enter the Name of a student\n";
	std::getline(std::cin, studentname);
	CreateRecord(studentname);
	PrintRecord(studentname);
	return 0;
}
bool PrintRecord(const std::string& key) {
	auto it = myDatabase.find(key);
	if (it == myDatabase.end())
		return false;
	else
		std::cout << key << "'s grades are\n";
		std::cout << "Math: " << myDatabase[key].MathGrade << "%";
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