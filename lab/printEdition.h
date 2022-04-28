#pragma once
#include <string>
using namespace std;

class printEdition
{
public: 

	printEdition();
	printEdition(string type, int number);
	string type = "";
	int number = 0;
	virtual void pageFunc();
};

