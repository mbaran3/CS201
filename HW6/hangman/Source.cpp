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
	PrintSpace(Secretword, guessed, Spaces);


	return 0;
}