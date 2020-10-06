#pragma once
#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cmath>

inline void keep_window_open() {
	std::string tmp;
	std::cin.clear();
	std::cout << "Press ENTER to exit the program." << std::endl;
	std::getline(std::cin, tmp);
}
inline void printvector(std::vector<std::string> v) {
	for (auto print : v)
		std::cout << print << std::endl;
}
inline int randomnum(int i) { // Generate a random number between 1 and i 
	srand(time(NULL));

	return rand() % i + 1;
}
inline void strtov(std::vector<std::string>& vec) { // takes a user input str and put it in vector
	std::string str;
	std::getline(std::cin, str);
	vec.push_back(str);
}