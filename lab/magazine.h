#pragma once
#include "printEdition.h"
#include <string>

using namespace std;

class magazine : public printEdition
{
public:
	magazine(string name, int articlePages, string articleName);
	virtual void pageFunc() override;

protected:
	void showMagazine();
	string name = "";
	int articlePages = 1;
	string articleName = "";
};

