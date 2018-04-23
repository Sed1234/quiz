#include "Quiz.h"

Quiz::Quiz()
{
}
Quiz & Quiz::getInstance()
{
	static Quiz instance;
	return instance;
}

Quiz::~Quiz()
{
	delete user;
}

void Quiz::initQuestions()
{
	
	this->questions.push_back(Questions("2+2", { "1","2","3","4" }, 4));
	this->questions.push_back(Questions("2+3", { "5","2","3","4" }, 1));
	this->questions.push_back(Questions("2+4", { "1","6","3","4" }, 2));
	this->questions.push_back(Questions("2+5", { "1","2","7","4" }, 3));
}

void Quiz::writeResultToFile()
{
}
