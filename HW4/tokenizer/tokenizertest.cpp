#include "tokenizer.hpp"
int main() {
	bool run = true;
	std::string Input;
	std::vector<std::string> Tokens;
	std::cout << "Enter a line of characters or text sperated by white space";
	std::cout << "type end, End, or END to end the porgram" << std::endl;
	while (run) {
		
		if(Readline(Input))
			StringToTokensWS(Input, Tokens);
		if (Input == "END" || Input == "end" || Input == "End")
			break;
	}
	AnalyzeTokens(Tokens);
	return 0;
}