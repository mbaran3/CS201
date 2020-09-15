#include<iostream>
#include<vector>
#include<string>


void inputnames(std::vector<std::string>& names) {
	int size;
	std::cout << "How many names would you like to enter" << std::endl;
	std::cin >> size;
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
void checknames(const std::vector<std::string>& names) {
	std::string checker;
	std::cout << "Enter a Name you would like to check for" << std::endl;
	std::getline(std::cin, checker);
	int size = names.size();
	for (int i = 0; i < size; i++) {

	if (names[i] == checker)
		std::cout << "Works" << std::endl;
		break;
	}
	std::cout << "THIS FUNCTION IS WORKING" << std::endl;

}
int main() {
	std::vector<std::string> names;

	inputnames(names);
	printnames(names);
	checknames(names);
}