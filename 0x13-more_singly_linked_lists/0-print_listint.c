#include "lists.h"

/**
  * print_listint - Prints all the elements of a linked list.
  * @h: The pointer to first node
  * Return: size of list
  */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
