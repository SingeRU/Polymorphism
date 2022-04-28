#include "printEdition.h"
#include <iostream>

using namespace std;

printEdition::printEdition()
{

}

printEdition::printEdition(string type, int number)
{
	this->type = type;
	this->number = number;
}

void printEdition::pageFunc()
{

	cout << "Что вы хотите найти?" << endl;
	cout << "1.Книга" << endl;
	cout << "2.Журнал" << endl;
	cin >> number;
	switch (number)
	{
	case 1:
		type = "book";
	case 2:
		type = "magazine";
	default:
		break;
	}
}
