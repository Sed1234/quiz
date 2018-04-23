#pragma once
#include <vector>
#include "Questions.h"
#include "User.h"
class Quiz
{
private:
	Quiz();
public:
	std::vector<Questions> questions;
	User *user;
	static Quiz & getInstance();
	int score = 0;
	~Quiz();
	void initQuestions();
	void writeResultToFile();
};

