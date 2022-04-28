#include <iostream>
#include <string>
#include "printEdition.h"
#include "book.h";
#include "magazine.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	printEdition* print = new printEdition("", 0);
	print->pageFunc();

	if (print->type == "book") {
		book* fairy = new book("", "", "");
		fairy->pageFunc();
		fairy->bookFind();
	}
	else if (print->type == "magazine") {
		magazine* newMagazine = new magazine("", 200, "");
		newMagazine->pageFunc();
	};
	return 0;
}

