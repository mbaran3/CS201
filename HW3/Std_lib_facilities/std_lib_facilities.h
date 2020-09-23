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
	for (int i = 0; i < v.size(); i++) {
		std::cout << v[i] << " ";
	}
}