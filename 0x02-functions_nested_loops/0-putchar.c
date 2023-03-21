#include <stdio.h>
/**
 * main - Entry point
 *
 * description: 'program write _putchar'
 *
 * Return: always 0
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	putchar('\n')

	return (0);
}
