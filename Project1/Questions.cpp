#include "Questions.h"



Questions::Questions(
std::string text,
std::vector <std::string> answers,
int right)
{
	this->text = text;
	this->answers = answers;
	this->right = right;
}
std::string Questions::getText() {
	return text;
}

std::vector<std::string> Questions::getAnswers() {
	return answers;
}

int Questions::getRight() {

	return right;
}

Questions::~Questions()
{
}
