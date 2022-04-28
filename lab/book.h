#pragma once
#include <string>
#include "printEdition.h"
using namespace std;
class book : public printEdition
{
public:
	book(string author, string name, string yearOfPublishing);
	void bookFind();
	virtual void pageFunc() override;

protected: 
	string author = "";
	string name = "";
	string yearOfPublishing = "";
};

