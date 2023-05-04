#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: Pointer 2 the number to change.
 * @index: Index position to change
 * Return: 1 if it worked, -1 if it error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num = *n;

	if (index > sizeof(8) * 8)
		return (-1);

	num &= ~(1 << index);

	*n = num;

	return (1);
}
