#ifndef DATABASE_HPP
#define DATABASE_HPP

#include<string>
#include<map>

struct  MyDatabaseRecord {

	std::string MathGrade;
	std::string EnglishGrade;
	std::string HistoryGrade;
	std::string ScienceGrade;
	bool passing = true;
};
bool CreateRecord(const std::string& key);


#endif