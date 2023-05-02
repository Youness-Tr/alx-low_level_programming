#include "lists.h"
/**
 * pop_listint - Deletes the head node
 * @head: Pointer to the first element
 * Return: Head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int nm;

	if (!head || !*head)
		return (0);
	nm = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;
	return (nm);
}
