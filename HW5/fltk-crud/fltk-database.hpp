#ifndef DATABASE_HPP
#define DATABASE_HPP

#include<iostream>
#include<string>
#include<map>

struct  MyDatabaseRecord {

	std::string MathGrade;
	std::string EnglishGrade;
	std::string HistoryGrade;
	std::string ScienceGrade;

};

bool CreateRecord(const std::string& key);
bool DeleteRecord(const std::string& key);
bool PrintRecord(const std::string& key);
bool EditRecord(const std::string& key);

inline void holdline() {
	std::string tmp;
	std::cin.clear();
	std::getline(std::cin, tmp);
}

#endif

