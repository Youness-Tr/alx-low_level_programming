#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: double pointer
 * @index: index of node
 *
 * Return: pointer to the index node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *nextn;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		nextn = (*head)->next;
		free(*head);
		*head = nextn;
		return (1);
	}
	node = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (node->next == NULL)
			return (-1);
		node = node->next;
	}
	nextn = node->next;
	node->next = nextn->next;
	free(nextn);
	return (1);

}
