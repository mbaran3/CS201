#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

void AnalyzeTokens(const std::vector<std::string>& tokens);

bool Readline(std::string& str);

unsigned StringToTokvensWS(const std::string& input, std::vector<std::string>& tokens);
