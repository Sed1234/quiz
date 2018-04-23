#include "Quiz.h"
#include "User.h"
#include <fstream>

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
	std::ifstream in("questions.txt");
	std::string text;
	std::vector<std::string> answers;
	int right;
	while (!in.eof()) {
		std::getline(in, text);
		std::string temp;
		for (int i = 0; i < 4; i++)
		{
			std::getline(in, temp);
			answers.push_back(temp);
		}
		 in >> right;
		questions.push_back(Questions(text, answers, right));
		answers.clear();
		text.clear();
	}
	in.close();
}
int Quiz::getScore()
{
	return score;
}

void Quiz::writeResultToFile()
{
	std::ofstream out("point1.txt");
	out <<user->getUsername()  <<" " <<Quiz::getScore();
}

