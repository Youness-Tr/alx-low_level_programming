#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Count the elements of a list_t list.
 * @h: Pointer 2  list.
 * Return: Number of elments.
 */
size_t list_len(const list_t *h)
{
	size_t elms = 0;

	while (h)
	{
		elms++;
		h = h->next;
	}
	return (elms);
}
