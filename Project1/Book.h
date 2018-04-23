#pragma once
#include <string>
#include<iostream>
#include <vector>
class Book
{
	std::vector <std::string> Books;
public:
	std::string Author;
	std::string Name;
	std::string Publisher;
	int Year;
	int pages;
	Book(std::string, std::string, std::string, int, int);
	~Book();
};

