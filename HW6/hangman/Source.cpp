/*
Hangman.cpp
Michael Baran
11 November 2020
HW6 for CS 201
*/
#include<iostream>
#include<map>
#include<algorithm>
#include<string>
#include <vector>
#include<random>
#include<algorithm>
#include<utility>

struct tracker {
	char guess;
	bool rightguess;
	int location;
};

void PrintSpace(std::string str, std::map<int, tracker> myMap, std::string& Spaces) {


	std::for_each(myMap.begin(), myMap.end(), 
		[&](const std::pair<int, tracker>& myMapPair) {
			if (myMapPair.second.rightguess)
				Spaces[myMapPair.second.location] = myMapPair.second.guess;

	});
	std::cout << Spaces;
}

int main() {

	std::random_device rd;
	std::uniform_int_distribution<int> randomnum(0, 6);
	bool hanged = false;
	std::map<int, tracker> guessed;

	std::vector<std::string> Words{ "HANG","MAN","GAME", "CODE",
	 "RANDOM", "WORDS", "KEYBOARD" };
	std::string Secretword = Words[randomnum(rd)];
	std::cout << "The word is : " << Secretword << std::endl;

	const int size = Secretword.size();
	std::string Spaces(size, ' _');
	
	int attemptsleft = 10;
	while (!hanged) {
		int counter = 0;

		std::string guess;
		std::cout << "\nYou have " << attemptsleft << " Attempts left";
		std::cout << "\nEnter a letter Upper case\n";
		PrintSpace(Secretword, guessed, Spaces);
		std::cout << "\n";
		std::getline(std::cin, guess);
		char guess2 = guess[0];

		std::string::iterator it = std::find(Secretword.begin(), Secretword.end(), guess2);
		if (it != Secretword.end()) {
			std::cout << guess << " Is in the word" << std::endl;
			guessed[counter].guess = guess2;
			guessed[counter].rightguess = true;
			guessed[counter].location = std::distance(Secretword.begin(), it);
		}
		else {
			std::cout << "The Secret word does not contain  that letter" << std::endl;
			guessed[counter].guess = guess2;
			guessed[counter].rightguess = false;
			attemptsleft = attemptsleft - 1;
		}
		if (attemptsleft == 0)
			break;
		PrintSpace(Secretword, guessed, Spaces);

	}

	return 0;
}