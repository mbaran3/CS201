/*
* Michael Baran
* Money.cpp
* September 17 2020
* CS201 HW2
*/
#include <iostream>
#include <vector>
#include <string>



int main() {

	std::vector<std::string> money = { "Penny", "Nickle", "Dime", "Quater", "Half Dollar",
	 "Dollar" };
	std::vector<std::string> monies = { "Pennies", "Nickles", "Dimes", "Quaters", "Half Dollars",
	 "Dollars" };
	std::vector<int> howmuch; //How much of each coin 
	std::vector<float> value = { .01, .05, .1, .25, .5, 1 }; //How much each coin is worth

	for (int i = 0; i < 6; i++) {
		int holdmoney;
		std::cout << "How many " << monies[i] << " Do you have" << std::endl;
		std::cin >> holdmoney;
		howmuch.push_back(holdmoney);
	}
	std::cout << "\n";
	for (int i = 0; i < 6; i++) {
		if (howmuch[i] == 1) {
			std::cout << "You have " << howmuch[i] << " " << money[i] << std::endl;
		}
		else {
			std::cout << "You have " << howmuch[i] << " " << monies[i] << std::endl;
		}
	}
	float totalvalue = 0;
	for (int i = 0; i < 6; i++) {

		float tempvalue = howmuch[i] * value[i];
		totalvalue = totalvalue + tempvalue;

	}
	std::cout << "You have a total of $" << totalvalue << std::endl;
}