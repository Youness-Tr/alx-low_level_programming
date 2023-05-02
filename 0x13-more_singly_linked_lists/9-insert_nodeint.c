#include "lists.h"

/**
* insert_nodeint_at_index - Inserts new node.
* @head: Pointer to head.
* @index: Node to insert.
* @n: Data of the new node.
* Return: Address of the new node otherwise NULL.
**/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *node, *new_nd;

	node = *head;
	new_nd = malloc(sizeof(listint_t));
	if (new_nd == NULL)
		return (NULL);
	new_nd->n = n;
	if (index == 0)
	{
		new_nd->next = node;
		*head = new_nd;
		return (*head);
	}
	while (index > 1)
	{
		node = node->next;
		index--;
		if (!node)
		{
			free(new_nd);
			return (NULL);
		}
	}
	new_nd->next = node->next;
	node->next = new_nd;
	return (new_nd);
}
