#include "database.hpp"
std::map<std::string, MyDatabaseRecord> myDatabase;
bool PrintRecord(const std::string& key) {
	auto it = myDatabase.find(key);
	if (it == myDatabase.end())
		return false;

	std::cout << "\n\n" << key << "'s grades are\n";
	std::cout << "Math: " << myDatabase[key].MathGrade << "%\n";
	std::cout << "English: " << myDatabase[key].EnglishGrade << "%\n";
	std::cout << "Scince: " << myDatabase[key].ScienceGrade << "%\n";
	std::cout << "History: " << myDatabase[key].HistoryGrade << "%\n";
	return true;

}
bool CreateRecord(const std::string& key) {
	auto it = myDatabase.find(key);
	if (it == myDatabase.end()) {
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
		myDatabase[key].EnglishGrade = grade;

		return true;
	}
	return false;

}
bool DeleteRecord(const std::string& key) {
	auto it = myDatabase.find(key);
	if (it == myDatabase.end())
		return false;
	std::string deletevirification;
	std::cout << "Are you sure you want to delete " << key;
	std::cout << "'s grades? If so please re-enter the students name\n";
	std::getline(std::cin, deletevirification);
	myDatabase.erase(key);
	return true;

}
bool EditRecord(const std::string& key) {
	std::string pointer; //How the users selects
	std::string NewGrade;
	bool run = true;
	while (run) {
		std::cout << "What grade would you like to edit\n";
		std::cout << "Enter 1 for History\nEnter 2 for Math\n";
		std::cout << "Enter 3 for Science\nEnter 4 for English\n";
		std::cout << "To return to the main menu enter RETURN\n";
		std::getline(std::cin, pointer);
		if (pointer == "RETURN")
			return true;
		switch (pointer[0]) {
			case '1':
				std::cout << "What is " << key << "'s new grade?\n";
				std::getline(std::cin, NewGrade);
				myDatabase[key].HistoryGrade = NewGrade;
				std::cout << "New History grade is " << myDatabase[key].HistoryGrade << "%\n";
				break;
			case '2':
				std::cout << "What is " << key << "'s new grade?\n";
				std::getline(std::cin, NewGrade);
				myDatabase[key].MathGrade = NewGrade;
				std::cout << "New Math grade is " << myDatabase[key].MathGrade << "%\n";
				break;
			case '3':
				std::cout << "What is " << key << "'s new grade?\n";
				std::getline(std::cin, NewGrade);
				myDatabase[key].ScienceGrade = NewGrade;
				std::cout << "New Science grade is " << myDatabase[key].ScienceGrade << "%\n";
				break;
			case '4':
				std::cout << "What is " << key << "'s new grade?\n";
				std::getline(std::cin, NewGrade);
				myDatabase[key].EnglishGrade = NewGrade;
				std::cout << "New English grade is " << myDatabase[key].EnglishGrade << "%\n";
				break;
		}
	}
}	
	
