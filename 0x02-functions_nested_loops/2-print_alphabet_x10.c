#include "main.h"

/**
 * print_alphabet_x10 - function that print the alphabet ten times
 *
 */

void print_alphabet_x10(void)
{
	int ln, ch;

	for (ln = 0; ln <= 9; ln++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
