#include <iostream>
#include "printEdition.h"
#include "magazine.h"

using namespace std;

magazine::magazine(string name, int articlePages, string articleName)
{
	this->name = name;
	this->articlePages = articlePages;
	this->articleName = articleName;
}

void magazine::pageFunc()
{
	cout << "Выберете журнал: " << endl;
	cout << "1.Cosmo" << endl;
	cout << "2.Maunro" << endl;
	cout << "3.Weekly Scince" << endl;
	cin >> number;
	switch (number)
	{
	case 1:
		name = "Cosmo";
	case 2:
		name = "Maunro";
	case 3: 
		name = "Weekly Scince";
	default:
		break;
	}
	
	showMagazine();
}

void magazine::showMagazine()
{
	cout << "Вы выбрали журнал: " << name << endl;
	if (name == "Cosmo") {
		articlePages = 15;
		articleName = "1.Fashion News";
		cout << "Содержание: " << endl << articleName << endl;
		cout << "Страниц: " << articlePages << endl;
	}
	else if (name == "Maunro") {
		articlePages = 10;
		articleName = "1.Где обитают тигры?";
		cout << "Содержание: " << endl << articleName << endl;
	}
	else if (name == "Weekly Scince")
	{
		articlePages = 40;
		articleName = "1.Адронный коллайдер и как он работает.";
		cout << "Содержание: " << endl << articleName << endl;
	}

}
