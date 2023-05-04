#include "main.h"

/**
 * print_binary - Convert decimal 2 binary.
 * @n: num in binary
 */
void print_binary(unsigned long int n)
{
	int i, cnt = 0;
	unsigned long int num;

	for (i = 63; i >= 0; i--)
	{
		num = n >> i;

		if (num & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
