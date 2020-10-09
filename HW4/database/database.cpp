#include "database.hpp"

int main() {
	bool run = true;
	std::string pointer;  // controls the program
	std::string studentname;
	while (run) {
		std::cout << "Enter 1 to add a name\nEnter 2 to print a students grade\n";
		std::cout << "Enter 3 to delete a student\nIf you want to close the program";
		std::cout << "type END end or End\n";
		std::getline(std::cin, pointer);
		system("CLS");
		if (pointer == "END" || pointer == "end" || pointer == "End")
			break;
		switch (pointer[0]) {
		case '1': // Creates a record for a student
			std::cout << "Enter a name\n";
			std::getline(std::cin, studentname);
			CreateRecord(studentname);
			if (!CreateRecord)
				std::cout << "This Student already has an entry\n";
			break;
		case '2': // Print the record of a single student
			std::cout << "Enter a name\n";
			std::getline(std::cin, studentname);
			PrintRecord(studentname);
			if (PrintRecord)
				std::cout << "\n";
			else
				std::cout << "This Student doesn't have a entry yet\n";
			break;
		case '3': // Deletes the records of a student
			std::cout << "Enter a name\n";
			std::getline(std::cin, studentname);
			DeleteRecord(studentname);
			if (DeleteRecord)
				std::cout << studentname << "'s records have been deleted\n";
			break;
		case '4': // edits the students records
			std::cout << "Enter a name\n";
			std::getline(std::cin, studentname);
			EditRecord(studentname);
			if (EditRecord)
				std::cout << studentname << "'s records have been edited\n";
		default: // Error message if a user entered a invalid thing
			std::cin.clear();
			std::cout << "\nYou did not enter a valid inpupt\nPress enter to continue\n";
			std::getline(std::cin, tmp);
			break;

		}
	}
	return 0;
}
