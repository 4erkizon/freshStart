#include "std_lib_facilities.h"
#include <conio.h>

int main()
{
	setlocale(LC_CTYPE, "russian");
	string prev = " ";
	string cur = "";
	int pos_rep = 0;
	while (cin >> cur)
	{
		pos_rep++;
		if (prev == cur)
		{
			cout << "Повторение слова " <<
				cur << " на позиции " << pos_rep << "\n";
		}
		prev = cur;
	}
	_getch();
	return 0;
}