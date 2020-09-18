#include <iostream>
#include <vector>
#include <string>


void print(std::vector<int> scores, std::vector<std::string> names){
	
	for (int i = 0; i < names.size(); i++) {
		std::cout << scores[i]<< " " << names[i] << std::endl;
	}
}
int main() {
	bool run = true;
	std::vector<int> scores;
	std::vector<std::string> names;
	while (run == true) {
		std::string name;
		int num;
		std::cout << "Enter a name" << std::endl;
		std::getline(std::cin, name);
		if (name == "0") {
			break;
		}
		std::cout << "Enter " << name <<"'s score" << std::endl;
		std::cin >> num;
		std::cin.ignore(1024, '\n');
		if (num == 0) {
			break;
		}
		scores.push_back(num);

	}
	for (int i = 0; i < scores.size(); i++) {
		std::cout << scores[i];
		std::cout << names[i];
	}

	print(scores, names);

}	