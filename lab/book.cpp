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
	cout << "������� ��� ������:" << endl;
	cin >> author;
	cout << "������� �������� �����:";
	cin >> name;
	cout << "������� ��� �������";
	cout << "�����: xx.xx.xxxx: ";
	cin >> yearOfPublishing;
}

void book::bookFind()
{
	cout << "���� �����: " << name << " ������: " << author << " �������!" << endl;
}
