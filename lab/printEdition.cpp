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

	cout << "��� �� ������ �����?" << endl;
	cout << "1.�����" << endl;
	cout << "2.������" << endl;
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
