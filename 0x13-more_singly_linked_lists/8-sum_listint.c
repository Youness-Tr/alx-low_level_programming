#include "lists.h"

/**
* sum_listint - Sum the data (n) in list.
* @head: Pointer to first node
* Return: Sum of data otherwise 0.
**/
int sum_listint(listint_t *head)
{
	int sum = 0;


	while (head)
	{
			sum += head->n;
			head = head->next;
	}
	return (sum);
}
