#include "function_pointers.h"

/**
 * int_index - iterate over an array and executes passed functions on the
 * elements.
 * @array: array of intergers.
 * @size: size of array.
 * @cmp: fuction to execute on the array.
 *
 * Return: index data type int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ar = 0;

	if (size > 0)
	{
		if (array && cmp)
		{
			while (ar < size)
			{
				if (cmp(array[ar]))
					return (ar);

				ar++;
			}
		}
	}

	return (-1);
}
