#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char.
 * @size: the size of the array
 * @c: initial value
 * owner: youness tr
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int a;

	if (size == 0)
		return (NULL);

	ar = (char *)malloc(sizeof(char) * size);
	if (ar == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		ar[a] = c;

	return (ar);
}
