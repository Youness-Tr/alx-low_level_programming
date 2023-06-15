#include <stdlib.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - Gets a node from a doubly linked list.
  * @head: The head of the doubly linked list.
  * @index: The index 2 find in the doubly linked list.
  * Return: The specific node of the doubly linked list.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cnt = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		if (cnt == index)
			return (head);

		head = head->next;
		cnt++;
	}

	return (head);
}
