#include "main.h"

/**
 * flip_bits - flip bits to convert one number to another number
 * @n: number one
 * @m: number two
 * Return: number of bits needed to flip
 */

unsigned int	 flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int r = n ^ m;
	int s = 0;

	while (r)
	{
		s += r & 1;
		r >>= 1;
	}
	return (s);
}
