#include "fltk-database.hpp"

int main() {
	bool run = true;
	std::string pointer;  // controls the program
	std::string studentname;
	while (run) {
		std::cout << "Enter 1 to add a name\nEnter 2 to print a students grade\n";
		std::cout << "Enter 3 to delete a student\nEnter 4 to edit a students records\n";
		std::cout << "If you want to close the program type END end or End\n";
		std::getline(std::cin, pointer);
		system("CLS");
		if (pointer == "END" || pointer == "end" || pointer == "End")
			break;
		switch (pointer[0]) {
		case '1': // Creates a record for a student
			std::cout << "Enter a name\n";
			std::getline(std::cin, studentname);
			if (!CreateRecord(studentname)) {
				std::cout << "\nThis Student already has an entry. Press Enter to continue\n";
				holdline();
				system("CLS");
			}
			else {
				std::cout << studentname << "'s record has been created. Press Enter to continue\n";
				holdline();
				system("CLS");
			}
			break;
		case '2': // Print the record of a single student
			std::cout << "Enter a name\n";
			std::getline(std::cin, studentname);
			if (PrintRecord(studentname))
				std::cout << "\n";
			else
				std::cout << "This Student doesn't have a entry yet\n";
			break;
		case '3': // Deletes the records of a student
			std::cout << "Enter a name\n";
			std::getline(std::cin, studentname);
			if (DeleteRecord(studentname))
				std::cout << studentname << "'s records have been deleted\n";
			break;
		case '4': // edits the students records
			std::cout << "Enter a name\n";
			std::getline(std::cin, studentname);
			if (EditRecord(studentname))
				std::cout << studentname << "'s records have been edited\n";
			else
				std::cout << studentname << " does not have a recrod yet\n";
		default: // Error message if a user entered a invalid thing
			std::string tmp;
			std::cin.clear();
			std::cout << "\nYou did not enter a valid inpupt\nPress enter to continue\n";
			std::getline(std::cin, tmp);
			break;

		}

	}
	return 0;
}
