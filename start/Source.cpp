#include "std_lib_facilities.h"
#include <conio.h>

int main()
{
	setlocale(LC_CTYPE, "russian");
	string prev = " ";
	string cur;
	int number_of_words = 0;
	while (cin >> cur)
	{
		++number_of_words;
		if (prev == cur)
		{
			cout << "Повторяющееся слово " << cur 
				<< " место " << number_of_words 
				<< "\n";
		}
		prev = cur;





	}
	_getch();
	return 0;
}