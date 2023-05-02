#include "lists.h"
/**
 * add_nodeint - new node at list.
 * Return: Address of new element of NULL if fail.
 * @head: pointer to first node
 * @n: Data to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
