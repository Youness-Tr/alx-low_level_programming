#include "main.h"

/**
 * malloc_checked - cause normal process termination with a status value of 98
 *
 * @b: allocated memory
 *
 * Return: pointer to the array initialized or NULL
 */
void *malloc_checked(unsigned int b)
{

	int *a = malloc(b);

	if (a == NULL)
		exit(98);

	return (a);

}
