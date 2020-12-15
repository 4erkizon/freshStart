#include "std_lib_facilities.h"
#include <conio.h>

int main()
{
	setlocale(LC_CTYPE, "russian");
	cout << "Привет мир!\n";
	_getch();
	return 0;
}