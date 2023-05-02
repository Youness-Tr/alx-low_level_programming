#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - Adds a new node to the end of a linked list.
  * @head: pointer to first node
  * @n: The value of new node
  * Return: pointer to new node, or NULL it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *buffer = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
}
	while (buffer->next)
		buffer = buffer->next;
	buffer->next = new_node;
	return (new_node);
}
