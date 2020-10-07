#include "tokenizer.hpp"
void AnalyzeTokens(const std::vector<std::string>& tokens) {
	
	for (auto token : tokens) {
		std::istringstream instream(token);
		int numtoken;
		instream >> numtoken;
		if (!instream && !token.empty() && token.front() == '"' && token.back() == '"')
			std::cout << "[string]\t" << token << "\n";
		else if (!instream && token.empty())
			std::cout << "[Whitespace]\t" << "\"\"\n";
		else if (!instream && !token.empty())
			std::cout << "[identifier]\t" << token << "\n";
		else
			std::cout << "[integer]\t" << token << "\n";
	}

}

unsigned StringToTokensWS(const std::string& input, std::vector<std::string>& tokens) {
	std::istringstream instream(input);
	std::string singletoken;
	bool run = true;
	while (run) {
		instream >> singletoken;
		tokens.push_back(singletoken);
		singletoken.clear();
		if (!instream) {
			break;
		}
	}
	return 0;
}

bool Readline(std::string& str) {
	return true;
}