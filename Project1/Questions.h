#pragma once
#include <string>
#include<vector>
class Questions
{
	std::string text;
	std:: vector <std::string> answers;
	int right;
public:
	Questions(std::string,
	std::vector <std::string>,
	int);
	std::string getText();
	std::vector<std::string> getAnswers();
	int getRight();

	~Questions();
};

