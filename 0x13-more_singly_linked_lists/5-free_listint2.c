#include "lists.h"

/**
 * free_listint2 - Frees a list of ints.
 * @head: poiter to first node.
 * Return: Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;
	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	*head = NULL;
}
