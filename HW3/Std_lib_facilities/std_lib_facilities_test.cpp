#include "std_lib_facilities.h"

int main() {

	std::vector<std::string> test = { "Hello", "Jackson", "Baran" };
	std::string name;
	std::cout << "Enter a Name " << std::endl;
	strtov(test);
	printvectorstring(test);
	keep_window_open();

	return 0;
}