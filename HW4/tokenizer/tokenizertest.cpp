#include "tokenizer.hpp"
int main() {
	bool run = true;
	std::string Input;
	std::vector<std::string> Tokens;
	while (run) {

		std::cout << "Enter a line of characters or text sperated by white space";
		std::cout << "type end, End, or END to end the porgram" << std::endl;
		std::getline(std::cin, Input);


		if (Input == "END" || Input == "end" || Input == "End")
			break;
		else {
			StringToTokvensWS(Input, Tokens);
			for (auto i : Tokens) {
				std::cout << i << "\n";
			}
			AnalyzeTokens(Tokens);
		}
	}
	return 0;
}