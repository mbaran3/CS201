#include "tokenizer.hpp"
int main() {
	bool run = true;
	std::string Input;
	std::vector<std::string> Tokens;
	std::cout << "Enter a line of characters or text sperated by white space";
	std::cout << "type end, End, or END to end the porgram" << std::endl;
	while (run) {


		std::getline(std::cin, Input);


		if (Input == "END" || Input == "end" || Input == "End")
			break;
		else {
			StringToTokensWS(Input, Tokens);
			
		}
	
	}
	Tokens.push_back(Input);
	AnalyzeTokens(Tokens);
	return 0;
}