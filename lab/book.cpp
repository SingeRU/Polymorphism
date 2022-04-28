#include "book.h"
#include "printEdition.h"
#include <iostream>

using namespace std;

book::book(string author,string name, string yearOfPublishing)
{
	this->author = author;
	this->name = name;
	this->yearOfPublishing = yearOfPublishing;
}

void book::pageFunc()
{
	cout << "Введите имя автора:" << endl;
	cin >> author;
	cout << "Введите название книги:";
	cin >> name;
	cout << "Укажите год выпуска";
	cout << "Маска: xx.xx.xxxx: ";
	cin >> yearOfPublishing;
}

void book::bookFind()
{
	cout << "Ваша книга: " << name << " автора: " << author << " найдена!" << endl;
}
