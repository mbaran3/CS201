#include <iostream>
#include <vector>
#include <string>
#include <time.h>
#include <sstream>
//takes the users guess and turns it into a vector
void getguess(std::vector<int>& vGuess) {
	bool run = true;
	std::string guess;
	while (run) {

		std::cout << "Enter your guess of 4 digets\n";
		std::getline(std::cin, guess);
		if (guess.size() == 4) {
			guess.insert(1, " ");
			guess.insert(3, " ");
			guess.insert(5, " ");
			std::istringstream in(guess);
			for (int i = 0; i < vGuess.size(); i++) {
				in >> vGuess[i];
				if(!in)
					std::cout << "Invalid input please only use numbers\n";
			}

			return;
		}
		std::cout << "Please enter a valid input\n";
	}
}
//checks the guess and returns true if the players won the game
bool checkguess(std::vector<int> Numbers, std::vector<int> Guess) {
		int bull = 0;
		int cow = 0;
		for (int i = 0; i < Numbers.size(); i++)
			for (int j = 0; j < Guess.size(); j++) {
				if (Numbers[i] == Guess[j] && (i == j))
					bull++;
				else if (Numbers[i] == Guess[j] && (i != j))
					cow++;
			}
		if (bull == 4)
			return true;

		std::cout << "You have " << bull << " Bulls and " << cow << " Cows\n";
		return false;
}
//uses time.h to generate random numbers for vector Numbers
void randomgenerator(std::vector<int>& Numbers) { 
	srand(time(NULL));						
	for (int i = 0; i < 4; i++) {
		int num = rand() % 10 + 1;
		Numbers[i] = num;
	}
}
int main() {
	std::vector<int> vGuess(4);
	std::vector<int> Numbers(4);
	randomgenerator(Numbers);
	std::cout << "A bull is a number right in the right position.\n";
	std::cout << "A cow is a number right in the wrong position.\n";
	std::cout << "Your goal is the guess the right 4 digit number\n";

	std::cout << "\n\n";
	bool run = true;
	while (run) {
		getguess(vGuess);
		if (checkguess(Numbers, vGuess))
			break;
	}
	std::cout << "You win!!";
	
	return 0;
}