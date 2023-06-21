#include "main.h"

/**
 * print_alphabet_x10 - Male alphabet x10 times
 */
void print_alphabet_x10(void)
{

	int tem;
	char la;

	for (tem = 0; tem <= 9; tem++)
	{

		for (la = 'a'; la <= 'z'; la++)
			_putchar(la);
		_putchar('\n');
	}
}
