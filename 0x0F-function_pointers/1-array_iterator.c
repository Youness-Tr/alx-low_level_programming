#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - fuction execute a fuction.
 * @array: array to interate through.
 * @size: array size
 * @action: the fuction to execute array and size on.
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if(array != NULL && size && action != NULL)
	{
		for(i = 0; i < size; i++)
			action(array[i]);
	}
}
