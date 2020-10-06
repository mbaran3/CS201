#include "tokenizer.hpp"
void AnalyzeTokens(const std::vector<std::string>& tokens) {

}

unsigned StringToTokvensWS(const std::string& input, std::vector<std::string>& tokens) {
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